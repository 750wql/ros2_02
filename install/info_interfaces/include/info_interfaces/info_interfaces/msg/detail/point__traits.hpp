// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from info_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__POINT__TRAITS_HPP_
#define INFO_INTERFACES__MSG__DETAIL__POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "info_interfaces/msg/detail/point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace info_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Point & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Point & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Point & msg, bool use_flow_style = false)
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
  const info_interfaces::msg::Point & msg,
  std::ostream & out, size_t indentation = 0)
{
  info_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use info_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const info_interfaces::msg::Point & msg)
{
  return info_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<info_interfaces::msg::Point>()
{
  return "info_interfaces::msg::Point";
}

template<>
inline const char * name<info_interfaces::msg::Point>()
{
  return "info_interfaces/msg/Point";
}

template<>
struct has_fixed_size<info_interfaces::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<info_interfaces::msg::Point>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<info_interfaces::msg::Point>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INFO_INTERFACES__MSG__DETAIL__POINT__TRAITS_HPP_
