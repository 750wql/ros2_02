// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from info_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define INFO_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "info_interfaces/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace info_interfaces
{

namespace msg
{

namespace builder
{

class Init_Robot_enemy
{
public:
  explicit Init_Robot_enemy(::info_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  ::info_interfaces::msg::Robot enemy(::info_interfaces::msg::Robot::_enemy_type arg)
  {
    msg_.enemy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::info_interfaces::msg::Robot msg_;
};

class Init_Robot_our_robot
{
public:
  Init_Robot_our_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_enemy our_robot(::info_interfaces::msg::Robot::_our_robot_type arg)
  {
    msg_.our_robot = std::move(arg);
    return Init_Robot_enemy(msg_);
  }

private:
  ::info_interfaces::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::info_interfaces::msg::Robot>()
{
  return info_interfaces::msg::builder::Init_Robot_our_robot();
}

}  // namespace info_interfaces

#endif  // INFO_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
