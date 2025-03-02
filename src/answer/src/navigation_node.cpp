//
// Created by wuqilin on 25-2-22.
//
#include "navigation_node.hpp"

navigation::Node::Node(const std::string& name)
    :rclcpp::Node(name), m_port_path("/dev/pts/2"), m_baud_rate(B115200), // 初始化串口路径和波特率
      m_my_serial(m_port_path, m_baud_rate)  // 使用构造函数初始化 m_my_serial
{

    m_count = 0;
    m_last_x = 0;
    m_last_y = 0;
    m_our_pose_publisher = this->create_publisher<geometry_msgs::msg::Pose2D>(topic_name::pose, 1);
    m_shoot_publisher = this->create_publisher<example_interfaces::msg::Bool>(topic_name::shoot, 1);
    m_password_subscription = this->create_subscription<example_interfaces::msg::Int64>(topic_name::password, 1, std::bind(&navigation::Node::password_cbfn, this, std::placeholders::_1));
    m_password_segment_subscription = this->create_subscription<example_interfaces::msg::Int64>(topic_name::password_segment, 1, std::bind(&navigation::Node::password_segment_cbfn, this, std::placeholders::_1));
    m_map_subscription = this->create_subscription<info_interfaces::msg::Map>(topic_name::map, 1, std::bind(&navigation::Node::map_init_cbfn, this, std::placeholders::_1));
    m_area_subscription = this->create_subscription<info_interfaces::msg::Area>(topic_name::area, 1, std::bind(&navigation::Node::area_init_cbfn, this, std::placeholders::_1));
    m_robot_subscription = this->create_subscription<info_interfaces::msg::Robot>(topic_name::robot, 1, std::bind(&navigation::Node::robot_navigation_cbfn, this, std::placeholders::_1));
    m_password_publisher = this->create_publisher<example_interfaces::msg::Int64>("password_topic", rclcpp::QoS(10));

}

void navigation::Node::map_init_cbfn(const info_interfaces::msg::Map::SharedPtr map_info)
{
    RCLCPP_INFO(get_logger(), "map got!");
    m_map = map_info;


}

void navigation::Node::area_init_cbfn(const info_interfaces::msg::Area::SharedPtr area_info)
{
    RCLCPP_INFO(get_logger(), "area got!");
    m_area = *area_info;


}



void navigation::Node::robot_navigation_cbfn(const info_interfaces::msg::Robot::SharedPtr robot_info)
{

    if (!this->m_map.use_count()) return;

    geometry_msgs::msg::Pose2D pose;

	// 获取当前时间
    auto current_time = std::chrono::steady_clock::now();

    if (0 == m_last_x && 0 == m_last_y)
    {
        m_last_x = robot_info->our_robot.x;
        m_last_y = robot_info->our_robot.y;
    }
    // 防止卡死在一个位置
    else if (robot_info->our_robot.x == m_last_x && robot_info->our_robot.y == m_last_y)
    {
		RCLCPP_INFO(get_logger(), "robot is stuck!");

                // 机器人还没有停滞太久，更新位置并发布正常动作
                m_last_x = robot_info->our_robot.x;
                m_last_y = robot_info->our_robot.y;

                // 做些微的调整动作，比如绕圈
                pose.x = m_dir[m_count][0];
                pose.y = m_dir[m_count][1];
                pose.theta = 0;

                // 更新计数器，确保四个方向轮流调整
                m_count++;
                m_count %= 4;

                // 发布调整动作
                m_our_pose_publisher->publish(pose);


    }
    else
    {
      	//获得敌人数量
      	int enemy_count = robot_info->enemy.size();
		RCLCPP_INFO(get_logger(), "Number of enemies detected: %d", enemy_count);

        if (robot_info->enemy.empty())
        {
          	RCLCPP_INFO(get_logger(), "Number of enemies detected: %d", enemy_count);
          	double password_x = m_area.password.x;
            double password_y = m_area.password.y;
           	algorithm::Path path_4 = algorithm::a_star(
            	this->m_map,
            	robot_info->our_robot.x,
            	robot_info->our_robot.y,
            	password_x,
            	password_y
        	);
            if (path_4.empty() && password_sent == false)
            {
                RCLCPP_INFO(get_logger(), "password area not found");
                double green_in_x = m_area.green_in.x;
                double green_in_y = m_area.green_in.y;
                algorithm::Path path_2 = algorithm::a_star(
            		this->m_map,
            		robot_info->our_robot.x,
            		robot_info->our_robot.y,
            		green_in_x,
            		green_in_y
                );

                if (path_2.empty())
                {
                  	double purple_in_x = m_area.purple_in.x;
                	double purple_in_y = m_area.purple_in.y;
                	algorithm::Path path_2 = algorithm::a_star(
            			this->m_map,
            			robot_info->our_robot.x,
            			robot_info->our_robot.y,
            			purple_in_x,
            			purple_in_y
                	);

                    std::tie(pose.x, pose.y) = path_2[1];
            		RCLCPP_INFO(get_logger(), "pathx_2:%d, pathy_2:%d", path_2[1].first, path_2[1].second);
            		pose.x -= robot_info->our_robot.x;
            		pose.y -= robot_info->our_robot.y;
            		pose.x /= 16;
            		pose.y /= 16;
            		pose.theta = std::atan2(purple_in_y - robot_info->our_robot.y, purple_in_x - robot_info->our_robot.x);// 计算自己相对于入口的角度
            		RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
					m_our_pose_publisher->publish(pose);// 发布新的姿态信息
             		// 检查是否到达紫色区域（距离小于某个阈值）
        			double distance_to_purple = std::sqrt(std::pow(robot_info->our_robot.x - purple_in_x, 2) + std::pow(robot_info->our_robot.y - purple_in_y, 2));

        			// 如果距离小于某个阈值（比如 5.0），则停顿 2 秒
        			const double ARRIVAL_THRESHOLD = 5.0;
        			if (distance_to_purple < ARRIVAL_THRESHOLD)
            		{
            			RCLCPP_INFO(get_logger(), "Arrived at the green area, pausing for 2 seconds...");
            			rclcpp::sleep_for(std::chrono::seconds(2));  // 停顿 2 秒
            			RCLCPP_INFO(get_logger(), "Resuming after 2 seconds...");

        			}

                }
                else
                {
                	std::tie(pose.x, pose.y) = path_2[1];
            		RCLCPP_INFO(get_logger(), "pathx_2:%d, pathy_2:%d", path_2[1].first, path_2[1].second);
            		pose.x -= robot_info->our_robot.x;
            		pose.y -= robot_info->our_robot.y;
            		pose.x /= 16;
            		pose.y /= 16;
            		pose.theta = std::atan2(green_in_y - robot_info->our_robot.y, green_in_x - robot_info->our_robot.x);// 计算自己相对于入口的角度
            		RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
					m_our_pose_publisher->publish(pose);// 发布新的姿态信息
             		// 检查是否到达绿色区域（距离小于某个阈值）
        			double distance_to_green = std::sqrt(std::pow(robot_info->our_robot.x - green_in_x, 2) + std::pow(robot_info->our_robot.y - green_in_y, 2));

        			// 如果距离小于某个阈值（比如 5.0），则停顿 2 秒
        			const double ARRIVAL_THRESHOLD = 5.0;
        			if (distance_to_green < ARRIVAL_THRESHOLD)
            		{
            			RCLCPP_INFO(get_logger(), "Arrived at the green area, pausing for 2 seconds...");
            			rclcpp::sleep_for(std::chrono::seconds(2));  // 停顿 2 秒
            			RCLCPP_INFO(get_logger(), "Resuming after 2 seconds...");

        			}
                }

            }
            else if(path_4.empty() && password_sent == true)
            {
					RCLCPP_INFO(get_logger(), "Base");
            	  	double base_x = m_area.base.x;
                	double base_y = m_area.base.y;
                	algorithm::Path path_6 = algorithm::a_star(
            			this->m_map,
            			robot_info->our_robot.x,
            			robot_info->our_robot.y,
            			base_x,
            			base_y
                	);

                    std::tie(pose.x, pose.y) = path_6[1];
            		RCLCPP_INFO(get_logger(), "pathx_6:%d, pathy_6:%d", path_6[1].first, path_6[1].second);
            		pose.x -= robot_info->our_robot.x;
            		pose.y -= robot_info->our_robot.y;
            		pose.x /= 16;
            		pose.y /= 16;
            		pose.theta = std::atan2(base_y - robot_info->our_robot.y, base_x - robot_info->our_robot.x);// 计算自己相对于入口的角度
            		RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
					m_our_pose_publisher->publish(pose);// 发布新的姿态信息
                      // 计算机器人与基地之间的欧几里得距离
            		double distance_to_base = std::sqrt(std::pow(robot_info->our_robot.x - base_x, 2) + std::pow(robot_info->our_robot.y - base_y, 2));
            		// 如果距离小于设定的阈值，则发射子弹
            		const double SHOOTING_THRESHOLD = 5.0; // 假设阈值为5个单位

            		if (distance_to_base < SHOOTING_THRESHOLD)
            		{
                		// 检查是否到了冷却时间
    					if (std::chrono::duration_cast<std::chrono::milliseconds>(current_time - last_shoot_time) > SHOOT_COOLDOWN)
    					{
        					// 触发发射子弹的行为
        					example_interfaces::msg::Bool shoot_msg;
        					shoot_msg.data = true;
        					m_shoot_publisher->publish(shoot_msg);

        					// 更新上次发射时间
        					last_shoot_time = current_time;

        					number = number - 1.0;

        					// 发布一个消息或者调用一个服务来模拟发射子弹
        					RCLCPP_INFO(get_logger(), "The value of number is: %f", number);
        					RCLCPP_INFO(get_logger(), "Enemy is within shooting range. Fire the bullet!");
    					}
    					else
    					{
        					RCLCPP_INFO(get_logger(), "Cooldown active. Cannot fire yet.");
    					}
            		}
            }
            else
            {
              	if(m_password_segment_vec.size() == 2)
    			{
      				RCLCPP_INFO(get_logger(), "password_segment get!");
        			first_segment = m_password_segment_vec[0];
					std::cout << "First segment: " << first_segment.data << std::endl;
        			second_segment = m_password_segment_vec[1];
					std::cout << "Second segment: " << second_segment.data << std::endl;
                        // 将两个片段的 data 转换为字符串并拼接
        			std::string combined_password = std::to_string(first_segment.data) + std::to_string(second_segment.data);

        			// 输出拼接后的密码
        			RCLCPP_INFO(get_logger(), "Combined password: %s", combined_password.c_str());

    			}

				if(password_sent == false)
                {
                    RCLCPP_INFO(get_logger(), "password: %ld", m_password.data);

                	RCLCPP_INFO(get_logger(), "password area  found");
                	std::tie(pose.x, pose.y) = path_4[1];
            		RCLCPP_INFO(get_logger(), "pathx_4:%d, pathy_4:%d", path_4[1].first, path_4[1].second);
            		pose.x -= robot_info->our_robot.x;
            		pose.y -= robot_info->our_robot.y;
            		pose.x /= 16;
            		pose.y /= 16;
            		pose.theta = std::atan2(password_y - robot_info->our_robot.y, password_x - robot_info->our_robot.x);// 计算自己相对于密码发射区的角度
            		RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
					m_our_pose_publisher->publish(pose);// 发布新的姿态信息

                }
				// 检查是否到达发射区区域（距离小于某个阈值）
        		double distance_to_password = std::sqrt(std::pow(robot_info->our_robot.x - password_x, 2) + std::pow(robot_info->our_robot.y - password_y, 2));


        		if (distance_to_password < 5.0 )
            	{
            		RCLCPP_INFO(get_logger(), "Arrived at the password send area, pausing for 2 seconds...");

					 // 发送密码给判题机
    				send_password_to_judger(m_password);
                    RCLCPP_INFO(get_logger(), "password send!");

                    // 设置发送完成标志
    				password_sent = true;
                    RCLCPP_INFO(get_logger(), "TRUE");
        		}

                if(password_sent == true)
                {
                  	RCLCPP_INFO(get_logger(), "password: %ld", m_password.data);
                  	RCLCPP_INFO(get_logger(), "OUT");
					
                  	double purple_in_x = m_area.purple_in.x;
                	double purple_in_y = m_area.purple_in.y;
                	algorithm::Path path_2 = algorithm::a_star(
            			this->m_map,
            			robot_info->our_robot.x,
            			robot_info->our_robot.y,
            			purple_in_x,
            			purple_in_y
                	);

                    if (path_2.empty())
					{
    					double green_in_x = m_area.green_in.x;
    					double green_in_y = m_area.green_in.y;

    					algorithm::Path path_3 = algorithm::a_star(
        				this->m_map,
        				robot_info->our_robot.x,
        				robot_info->our_robot.y,
        				green_in_x,
        				green_in_y
    					);
							
    					// 更新机器人位置
    					std::tie(pose.x, pose.y) = path_3[1];
    					RCLCPP_INFO(get_logger(), "pathx_3:%d, pathy_3:%d", path_3[1].first, path_3[1].second);
    					pose.x -= robot_info->our_robot.x;
    					pose.y -= robot_info->our_robot.y;
    					pose.x /= 16;
    					pose.y /= 16;
    					pose.theta = std::atan2(green_in_y - robot_info->our_robot.y, green_in_x - robot_info->our_robot.x);  // 计算角度
    					RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
    					m_our_pose_publisher->publish(pose);  // 发布新的姿态信息

					


    					// 检查是否到达绿色区域（出口）
    					double distance_to_green = std::sqrt(std::pow(robot_info->our_robot.x - green_in_x, 2) + std::pow(robot_info->our_robot.y - green_in_y, 2));
    					const double ARRIVAL_THRESHOLD = 5.0;  // 到达出口的距离阈值

    					if (distance_to_green < ARRIVAL_THRESHOLD)
    					{
							
        					// 到达目标区域，立刻停止
        					RCLCPP_INFO(get_logger(), "Arrived at the exit, stopping the robot!");

        					RCLCPP_INFO(get_logger(), "Arrived at the green area, pausing for 2 seconds...");
							rclcpp::sleep_for(std::chrono::seconds(2));  // 停顿 2 秒
							RCLCPP_INFO(get_logger(), "Resuming after 2 seconds...");
    					}
					

                    	
                   	}
					std::tie(pose.x, pose.y) = path_2[1];
					RCLCPP_INFO(get_logger(), "pathx_2:%d, pathy_2:%d", path_2[1].first, path_2[1].second);
					pose.x -= robot_info->our_robot.x;
					pose.y -= robot_info->our_robot.y;
					pose.x /= 16;
					pose.y /= 16;
					pose.theta = std::atan2(purple_in_y - robot_info->our_robot.y, purple_in_x - robot_info->our_robot.x);// 计算自己相对于入口的角度
					
					RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
					m_our_pose_publisher->publish(pose);// 发布新的姿态信息
					// 检查是否到达绿色区域（距离小于某个阈值）
					double distance_to_purple = std::sqrt(std::pow(robot_info->our_robot.x - purple_in_x, 2) + std::pow(robot_info->our_robot.y - purple_in_y, 2));


					if (distance_to_purple < 5.0)
					{
						
						RCLCPP_INFO(get_logger(), "Arrived at the green area, pausing for 2 seconds...");
						rclcpp::sleep_for(std::chrono::seconds(2));  // 停顿 2 秒
						RCLCPP_INFO(get_logger(), "Resuming after 2 seconds...");

					}
                }

            }
		}
        else if(enemy_count != 0)
        {
        	std::sort(robot_info->enemy.begin(), robot_info->enemy.end(), [&robot_info](const info_interfaces::msg::Point& a, const info_interfaces::msg::Point& b)
            	{return algorithm::manhattan_distance(robot_info->our_robot.x, robot_info->our_robot.y, a.x, a.y) < algorithm::manhattan_distance(robot_info->our_robot.x, robot_info->our_robot.y, b.x, b.y);});
        	algorithm::Path path = algorithm::a_star(
            	this->m_map,
            	robot_info->our_robot.x,
            	robot_info->our_robot.y,
            	robot_info->enemy[0].x,
            	robot_info->enemy[0].y
        	);
        	RCLCPP_INFO(get_logger(), "ourx:%d, oury:%d", robot_info->our_robot.x, robot_info->our_robot.y);
        	RCLCPP_INFO(get_logger(), "enemyx:%d, enemyy:%d", robot_info->enemy[0].x, robot_info->enemy[0].y);



			//获得补给区坐标
			double m_recover_x = m_area.recover.x;
			double m_recover_y = m_area.recover.y;



    		// 假设机器人的位置为 (robot_x, robot_y)，朝向角度为 theta
    		// 枪口相对于机器人中心的偏移量（假设在机器人前方，偏移量为 (gun_offset_x, gun_offset_y)）
    		double robot_x = robot_info->our_robot.x;
    		double robot_y = robot_info->our_robot.y;
    		double robot_theta = pose.theta;
    		// 假设枪口在机器人前方的 1 个单位位置
    		double gun_offset_x = 1;  // 枪口相对于机器人中心的偏移量（x方向）


    		// 计算枪口的绝对位置
    		double gun_x = robot_x + gun_offset_x * std::cos(robot_theta);  // 机器人朝向角度计算枪口位置
    		double gun_y = robot_y + gun_offset_x * std::sin(robot_theta);

    		// 获取敌人位置（假设敌人的位置是 (enemy_x, enemy_y)）
    		double enemy_x = robot_info->enemy[0].x;
    		double enemy_y = robot_info->enemy[0].y;

			//规划补给区路线
			algorithm::Path path_1 = algorithm::a_star(
            	this->m_map,
            	robot_info->our_robot.x,
            	robot_info->our_robot.y,
            	m_recover_x,
            	m_recover_y
        	);





        	if (path.size() >= 2 && number >4)
        	{
          		RCLCPP_INFO(get_logger(), "begin trace");
            	RCLCPP_INFO(get_logger(), "The value of number is: %f", number);
            	std::tie(pose.x, pose.y) = path[1];
            	RCLCPP_INFO(get_logger(), "pathx:%d, pathy:%d", path[1].first, path[1].second);
            	pose.x -= robot_x;
            	pose.y -= robot_y;
            	pose.x /= 16;
            	pose.y /= 16;
            	pose.theta = std::atan2(enemy_y - gun_y, enemy_x - gun_x);// 计算敌人相对于枪口的角度
            	RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
				m_our_pose_publisher->publish(pose);// 发布新的姿态信息

            	// 计算机器人与敌人之间的欧几里得距离
            	double distance_to_enemy = std::sqrt(std::pow(robot_x - enemy_x, 2) + std::pow(robot_y - enemy_y, 2));
            	// 如果距离小于设定的阈值，则发射子弹
            	const double SHOOTING_THRESHOLD = 5.0; // 假设阈值为5个单位

            	if (distance_to_enemy < SHOOTING_THRESHOLD)
            	{
                	// 检查是否到了冷却时间
    				if (std::chrono::duration_cast<std::chrono::milliseconds>(current_time - last_shoot_time) > SHOOT_COOLDOWN)
    				{
        				// 触发发射子弹的行为
        				example_interfaces::msg::Bool shoot_msg;
        				shoot_msg.data = true;
        				m_shoot_publisher->publish(shoot_msg);

        				// 更新上次发射时间
        				last_shoot_time = current_time;

        				number = number - 1.0;

        				// 发布一个消息或者调用一个服务来模拟发射子弹
        				RCLCPP_INFO(get_logger(), "The value of number is: %f", number);
        				RCLCPP_INFO(get_logger(), "Enemy is within shooting range. Fire the bullet!");
    				}
    				else
    				{
        				RCLCPP_INFO(get_logger(), "Cooldown active. Cannot fire yet.");
    				}
            	}
        	}

        	else if (number <= 4)
        	{
            	std::tie(pose.x, pose.y) = path_1[1];
            	RCLCPP_INFO(get_logger(), "path_1x:%d, path_1y:%d", path_1[1].first, path_1[1].second);
            	pose.x -= robot_x;
            	pose.y -= robot_y;
            	pose.x /= 16;
            	pose.y /= 16;
            	pose.theta = std::atan2(m_recover_y - robot_y, m_recover_x - robot_x);// 计算自己相对于补给区的角度

                // 检查是否到达补给区域（距离小于某个阈值）
        		double distance_to_recover = std::sqrt(std::pow(robot_info->our_robot.x - m_recover_x, 2) + std::pow(robot_info->our_robot.y - m_recover_y, 2));

        		// 如果距离小于某个阈值（比如 2.0），则停顿 5 秒
        		const double ARRIVAL_THRESHOLD_1 = 1.0;
        		if (distance_to_recover< ARRIVAL_THRESHOLD_1)
            	{
					
            		RCLCPP_INFO(get_logger(), "Arrived at the recover area, pausing for 5 seconds...");
            		rclcpp::sleep_for(std::chrono::seconds(5));  // 停顿 5 秒
            		RCLCPP_INFO(get_logger(), "Resuming after 5 seconds...");
        		}
                //计算自己相对于补给区的距离
            	double distance_1 = std::sqrt(std::pow(robot_x - m_recover_x, 2) + std::pow(robot_y - m_recover_y, 2));
				RCLCPP_INFO(get_logger(), "The value of number is: %f", number);
            	if (distance_1 <= 1.0)
            	{
            	  	number += 15.0;
            	}
            	RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
            	m_our_pose_publisher->publish(pose);// 发布新的姿态信息
			}
        }
    }
	
}

void navigation::Node::password_cbfn(const example_interfaces::msg::Int64::SharedPtr password)
{
    m_password = *password;
	RCLCPP_INFO(get_logger(), "password get");


}


void navigation::Node::password_segment_cbfn(const example_interfaces::msg::Int64::SharedPtr password_segment)
{
    m_password_segment_vec.push_back(*password_segment);
	 // 将密码片段添加到存储容器
    if(m_password_segment_vec.size() == 2)
    {
      	RCLCPP_INFO(get_logger(), "password_segment get!");
        first_segment = m_password_segment_vec[0];
		std::cout << "First segment: " << first_segment.data << std::endl;
        second_segment = m_password_segment_vec[1];
		std::cout << "Second segment: " << second_segment.data << std::endl;

		example_interfaces::msg::Int64 password_msg1;
    	example_interfaces::msg::Int64 password_msg2;
    
    	password_msg1.data = m_password_segment_vec[0].data;
    	password_msg2.data = m_password_segment_vec[1].data;

		send_password_to_judger(password_msg1);

        send_password_to_judger(password_msg2);

		
        


    }
}

void navigation::Node::read_serial_data()//接收密码
{
    std::string data = m_my_serial.receive_data();  // 接收串口数据

    if (!data.empty()) {
        RCLCPP_INFO(this->get_logger(), "Received from serial: %s", data.c_str());

        // 尝试将字符串转换为 int64_t
        try {
            // 使用 std::stoll 将字符串转换为 long long int (int64_t)
            int64_t int_data = std::stoll(data);


            m_password.data = int_data;

            // 你可以在这里进一步处理这个消息
            // 比如发布消息、存储数据等等
            RCLCPP_INFO(this->get_logger(), "Converted data: %ld", m_password.data);

            // 如果需要发布消息，可以创建发布者并发布
            // m_int64_publisher->publish(msg);
        }
        catch (const std::invalid_argument& e) {
            RCLCPP_ERROR(this->get_logger(), "Invalid argument: %s", e.what());
        }
        catch (const std::out_of_range& e) {
            RCLCPP_ERROR(this->get_logger(), "Out of range: %s", e.what());
        }
    }
}

void navigation::Node::send_data_to_serial(const std::string& data)
{
    m_my_serial.send_data(data);
    RCLCPP_INFO(this->get_logger(), "Sent to serial: %s", data.c_str());

}

// 发送密码片段的函数
void navigation::Node::send_password_segments(const example_interfaces::msg::Int64& combined_password)
{
    // 将拼接后的密码转换为字符串
    std::string data = std::to_string(combined_password.data);  // 转换为字符串

    // 通过串口发送密码片段
    send_data_to_serial(data);
    RCLCPP_INFO(get_logger(), "Send success: %s", data.c_str());
}

// 发布密码
void navigation::Node::send_password_to_judger(const example_interfaces::msg::Int64 &password)
{
    // 发布密码消息
    m_password_publisher->publish(password);
    RCLCPP_INFO(this->get_logger(), "Password sent to judger: %ld", password.data);
}


int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<navigation::Node>(std::string("navigation_node"));
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
