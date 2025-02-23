// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from info_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_
#define INFO_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "info_interfaces/msg/detail/point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace info_interfaces
{

namespace msg
{

namespace builder
{

class Init_Point_y
{
public:
  explicit Init_Point_y(::info_interfaces::msg::Point & msg)
  : msg_(msg)
  {}
  ::info_interfaces::msg::Point y(::info_interfaces::msg::Point::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::info_interfaces::msg::Point msg_;
};

class Init_Point_x
{
public:
  Init_Point_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point_y x(::info_interfaces::msg::Point::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point_y(msg_);
  }

private:
  ::info_interfaces::msg::Point msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::info_interfaces::msg::Point>()
{
  return info_interfaces::msg::builder::Init_Point_x();
}

}  // namespace info_interfaces

#endif  // INFO_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_
