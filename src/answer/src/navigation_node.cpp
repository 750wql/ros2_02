//
// Created by wuqilin on 25-2-22.
//
#include "navigation_node.hpp"

navigation::Node::Node(const std::string& name)
    :rclcpp::Node(name)
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
	//获得补给区坐标
	double m_recover_x = m_area.recover.x;
	double m_recover_y = m_area.recover.y;


	double number = 10.0; //初始子弹数量
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

    if (0 == m_last_x && 0 == m_last_y)
    {
        m_last_x = robot_info->our_robot.x;
        m_last_y = robot_info->our_robot.y;
    }
    // 防止卡死在一个位置
    else if (robot_info->our_robot.x == m_last_x && robot_info->our_robot.y == m_last_y)
    {
            // 记录机器人停滞时间的成员变量
            std::chrono::steady_clock::time_point m_last_move_time;
            const std::chrono::seconds STUCK_THRESHOLD = std::chrono::seconds(5); // 假设5秒为卡死的阈值
            // 如果机器人停滞时间超过阈值，认为卡住了
            auto current_time = std::chrono::steady_clock::now();
            if (std::chrono::duration_cast<std::chrono::seconds>(current_time - m_last_move_time) > STUCK_THRESHOLD)
            {
                // 卡住了，尝试恢复
                RCLCPP_WARN(get_logger(), "Robot is stuck! Trying to recover...");

                // 进行一些恢复策略：比如先稍微旋转
                pose.x = 0;
                pose.y = 0;
                pose.theta = 1.57;  // 旋转90度

                // 发布恢复动作
                m_our_pose_publisher->publish(pose);

                // 重置停滞时间
                m_last_move_time = current_time;

                // 增加恢复策略：如果旋转后仍然卡住，可以尝试改变方向或者重新规划路径
                if (m_count == 0)
                {
                    m_count = 2;  // 从下方或其他方向恢复
                }
                m_count++;
                m_count %= 4;
            }
            else
            {
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

    }
    else
    {
        if (robot_info->enemy.empty()) return;
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


		//规划补给区路线
		algorithm::Path path_1 = algorithm::a_star(
            this->m_map,
            robot_info->our_robot.x,
            robot_info->our_robot.y,
            m_recover_x,
            m_recover_y
        );







        if (path.size() >= 2 && number >5)
        {
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
                // 触发发射子弹的行为
                example_interfaces::msg::Bool shoot_msg;
                shoot_msg.data = true;
                m_shoot_publisher->publish(shoot_msg);
                number = number - 1.0;
                // 发布一个消息或者调用一个服务来模拟发射子弹
                RCLCPP_INFO(get_logger(), "Enemy is within shooting range. Fire the bullet!");
            }
        }

        else if (number <= 5)
        {
            std::tie(pose.x, pose.y) = path_1[1];
            RCLCPP_INFO(get_logger(), "pathx:%d, pathy:%d", path_1[1].first, path_1[1].second);
            pose.x -= robot_x;
            pose.y -= robot_y;
            pose.x /= 16;
            pose.y /= 16;
            pose.theta = std::atan2(m_recover_y - robot_y, m_recover_x - robot_x);// 计算自己相对于补给区的角度
            //计算自己相对于补给区的距离
            double distance_1 = std::sqrt(std::pow(robot_x - m_recover_x, 2) + std::pow(robot_y - m_recover_y, 2));

            if (distance_1 == 0)
              {
              		number = 10.0;
              }
            RCLCPP_INFO(get_logger(), "posex:%lf, posey:%lf theta:%lf", pose.x, pose.y, pose.theta);
            m_our_pose_publisher->publish(pose);// 发布新的姿态信息
		}
    }

}

void navigation::Node::password_cbfn(const example_interfaces::msg::Int64::SharedPtr password)
{
    m_password = *password;
}

void navigation::Node::password_segment_cbfn(const example_interfaces::msg::Int64::SharedPtr password_segment)
{
    m_password_segment_vec.push_back(*password_segment);
}

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<navigation::Node>(std::string("navigation_node"));
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}