// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__AREA__TRAITS_HPP_
#define INFO_INTERFACES__MSG__DETAIL__AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "info_interfaces/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'base'
// Member 'recover'
// Member 'password'
// Member 'green_in'
// Member 'green_out'
// Member 'purple_in'
// Member 'purple_out'
// Member 'hp'
#include "info_interfaces/msg/detail/point__traits.hpp"

namespace info_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Area & msg,
  std::ostream & out)
{
  out << "{";
  // member: base
  {
    out << "base: ";
    to_flow_style_yaml(msg.base, out);
    out << ", ";
  }

  // member: recover
  {
    out << "recover: ";
    to_flow_style_yaml(msg.recover, out);
    out << ", ";
  }

  // member: password
  {
    out << "password: ";
    to_flow_style_yaml(msg.password, out);
    out << ", ";
  }

  // member: green_in
  {
    out << "green_in: ";
    to_flow_style_yaml(msg.green_in, out);
    out << ", ";
  }

  // member: green_out
  {
    out << "green_out: ";
    to_flow_style_yaml(msg.green_out, out);
    out << ", ";
  }

  // member: purple_in
  {
    out << "purple_in: ";
    to_flow_style_yaml(msg.purple_in, out);
    out << ", ";
  }

  // member: purple_out
  {
    out << "purple_out: ";
    to_flow_style_yaml(msg.purple_out, out);
    out << ", ";
  }

  // member: hp
  {
    out << "hp: ";
    to_flow_style_yaml(msg.hp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base:\n";
    to_block_style_yaml(msg.base, out, indentation + 2);
  }

  // member: recover
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recover:\n";
    to_block_style_yaml(msg.recover, out, indentation + 2);
  }

  // member: password
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "password:\n";
    to_block_style_yaml(msg.password, out, indentation + 2);
  }

  // member: green_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_in:\n";
    to_block_style_yaml(msg.green_in, out, indentation + 2);
  }

  // member: green_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_out:\n";
    to_block_style_yaml(msg.green_out, out, indentation + 2);
  }

  // member: purple_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "purple_in:\n";
    to_block_style_yaml(msg.purple_in, out, indentation + 2);
  }

  // member: purple_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "purple_out:\n";
    to_block_style_yaml(msg.purple_out, out, indentation + 2);
  }

  // member: hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hp:\n";
    to_block_style_yaml(msg.hp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Area & msg, bool use_flow_style = false)
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
  const info_interfaces::msg::Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  info_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use info_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const info_interfaces::msg::Area & msg)
{
  return info_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<info_interfaces::msg::Area>()
{
  return "info_interfaces::msg::Area";
}

template<>
inline const char * name<info_interfaces::msg::Area>()
{
  return "info_interfaces/msg/Area";
}

template<>
struct has_fixed_size<info_interfaces::msg::Area>
  : std::integral_constant<bool, has_fixed_size<info_interfaces::msg::Point>::value> {};

template<>
struct has_bounded_size<info_interfaces::msg::Area>
  : std::integral_constant<bool, has_bounded_size<info_interfaces::msg::Point>::value> {};

template<>
struct is_message<info_interfaces::msg::Area>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INFO_INTERFACES__MSG__DETAIL__AREA__TRAITS_HPP_
