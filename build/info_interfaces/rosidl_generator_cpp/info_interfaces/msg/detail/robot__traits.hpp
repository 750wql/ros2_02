// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from info_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define INFO_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "info_interfaces/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'our_robot'
// Member 'enemy'
#include "info_interfaces/msg/detail/point__traits.hpp"

namespace info_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robot & msg,
  std::ostream & out)
{
  out << "{";
  // member: our_robot
  {
    out << "our_robot: ";
    to_flow_style_yaml(msg.our_robot, out);
    out << ", ";
  }

  // member: enemy
  {
    if (msg.enemy.size() == 0) {
      out << "enemy: []";
    } else {
      out << "enemy: [";
      size_t pending_items = msg.enemy.size();
      for (auto item : msg.enemy) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: our_robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "our_robot:\n";
    to_block_style_yaml(msg.our_robot, out, indentation + 2);
  }

  // member: enemy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enemy.size() == 0) {
      out << "enemy: []\n";
    } else {
      out << "enemy:\n";
      for (auto item : msg.enemy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robot & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace info_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use info_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const info_interfaces::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  info_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use info_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const info_interfaces::msg::Robot & msg)
{
  return info_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<info_interfaces::msg::Robot>()
{
  return "info_interfaces::msg::Robot";
}

template<>
inline const char * name<info_interfaces::msg::Robot>()
{
  return "info_interfaces/msg/Robot";
}

template<>
struct has_fixed_size<info_interfaces::msg::Robot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<info_interfaces::msg::Robot>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<info_interfaces::msg::Robot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INFO_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_
