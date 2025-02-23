// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__AREA__BUILDER_HPP_
#define INFO_INTERFACES__MSG__DETAIL__AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "info_interfaces/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace info_interfaces
{

namespace msg
{

namespace builder
{

class Init_Area_hp
{
public:
  explicit Init_Area_hp(::info_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  ::info_interfaces::msg::Area hp(::info_interfaces::msg::Area::_hp_type arg)
  {
    msg_.hp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

class Init_Area_purple_out
{
public:
  explicit Init_Area_purple_out(::info_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_hp purple_out(::info_interfaces::msg::Area::_purple_out_type arg)
  {
    msg_.purple_out = std::move(arg);
    return Init_Area_hp(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

class Init_Area_purple_in
{
public:
  explicit Init_Area_purple_in(::info_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_purple_out purple_in(::info_interfaces::msg::Area::_purple_in_type arg)
  {
    msg_.purple_in = std::move(arg);
    return Init_Area_purple_out(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

class Init_Area_green_out
{
public:
  explicit Init_Area_green_out(::info_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_purple_in green_out(::info_interfaces::msg::Area::_green_out_type arg)
  {
    msg_.green_out = std::move(arg);
    return Init_Area_purple_in(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

class Init_Area_green_in
{
public:
  explicit Init_Area_green_in(::info_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_green_out green_in(::info_interfaces::msg::Area::_green_in_type arg)
  {
    msg_.green_in = std::move(arg);
    return Init_Area_green_out(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

class Init_Area_password
{
public:
  explicit Init_Area_password(::info_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_green_in password(::info_interfaces::msg::Area::_password_type arg)
  {
    msg_.password = std::move(arg);
    return Init_Area_green_in(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

class Init_Area_recover
{
public:
  explicit Init_Area_recover(::info_interfaces::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_password recover(::info_interfaces::msg::Area::_recover_type arg)
  {
    msg_.recover = std::move(arg);
    return Init_Area_password(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

class Init_Area_base
{
public:
  Init_Area_base()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Area_recover base(::info_interfaces::msg::Area::_base_type arg)
  {
    msg_.base = std::move(arg);
    return Init_Area_recover(msg_);
  }

private:
  ::info_interfaces::msg::Area msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::info_interfaces::msg::Area>()
{
  return info_interfaces::msg::builder::Init_Area_base();
}

}  // namespace info_interfaces

#endif  // INFO_INTERFACES__MSG__DETAIL__AREA__BUILDER_HPP_
