// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from info_interfaces:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__MAP__BUILDER_HPP_
#define INFO_INTERFACES__MSG__DETAIL__MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "info_interfaces/msg/detail/map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace info_interfaces
{

namespace msg
{

namespace builder
{

class Init_Map_mat
{
public:
  explicit Init_Map_mat(::info_interfaces::msg::Map & msg)
  : msg_(msg)
  {}
  ::info_interfaces::msg::Map mat(::info_interfaces::msg::Map::_mat_type arg)
  {
    msg_.mat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::info_interfaces::msg::Map msg_;
};

class Init_Map_grid_height
{
public:
  explicit Init_Map_grid_height(::info_interfaces::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_mat grid_height(::info_interfaces::msg::Map::_grid_height_type arg)
  {
    msg_.grid_height = std::move(arg);
    return Init_Map_mat(msg_);
  }

private:
  ::info_interfaces::msg::Map msg_;
};

class Init_Map_grid_width
{
public:
  explicit Init_Map_grid_width(::info_interfaces::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_grid_height grid_width(::info_interfaces::msg::Map::_grid_width_type arg)
  {
    msg_.grid_width = std::move(arg);
    return Init_Map_grid_height(msg_);
  }

private:
  ::info_interfaces::msg::Map msg_;
};

class Init_Map_col
{
public:
  explicit Init_Map_col(::info_interfaces::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_grid_width col(::info_interfaces::msg::Map::_col_type arg)
  {
    msg_.col = std::move(arg);
    return Init_Map_grid_width(msg_);
  }

private:
  ::info_interfaces::msg::Map msg_;
};

class Init_Map_row
{
public:
  Init_Map_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Map_col row(::info_interfaces::msg::Map::_row_type arg)
  {
    msg_.row = std::move(arg);
    return Init_Map_col(msg_);
  }

private:
  ::info_interfaces::msg::Map msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::info_interfaces::msg::Map>()
{
  return info_interfaces::msg::builder::Init_Map_row();
}

}  // namespace info_interfaces

#endif  // INFO_INTERFACES__MSG__DETAIL__MAP__BUILDER_HPP_
