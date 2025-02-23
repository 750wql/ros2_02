// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from info_interfaces:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__MAP__TRAITS_HPP_
#define INFO_INTERFACES__MSG__DETAIL__MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "info_interfaces/msg/detail/map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace info_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Map & msg,
  std::ostream & out)
{
  out << "{";
  // member: row
  {
    out << "row: ";
    rosidl_generator_traits::value_to_yaml(msg.row, out);
    out << ", ";
  }

  // member: col
  {
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
    out << ", ";
  }

  // member: grid_width
  {
    out << "grid_width: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_width, out);
    out << ", ";
  }

  // member: grid_height
  {
    out << "grid_height: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_height, out);
    out << ", ";
  }

  // member: mat
  {
    if (msg.mat.size() == 0) {
      out << "mat: []";
    } else {
      out << "mat: [";
      size_t pending_items = msg.mat.size();
      for (auto item : msg.mat) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Map & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row: ";
    rosidl_generator_traits::value_to_yaml(msg.row, out);
    out << "\n";
  }

  // member: col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
    out << "\n";
  }

  // member: grid_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_width: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_width, out);
    out << "\n";
  }

  // member: grid_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_height: ";
    rosidl_generator_traits::value_to_yaml(msg.grid_height, out);
    out << "\n";
  }

  // member: mat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mat.size() == 0) {
      out << "mat: []\n";
    } else {
      out << "mat:\n";
      for (auto item : msg.mat) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Map & msg, bool use_flow_style = false)
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
  const info_interfaces::msg::Map & msg,
  std::ostream & out, size_t indentation = 0)
{
  info_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use info_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const info_interfaces::msg::Map & msg)
{
  return info_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<info_interfaces::msg::Map>()
{
  return "info_interfaces::msg::Map";
}

template<>
inline const char * name<info_interfaces::msg::Map>()
{
  return "info_interfaces/msg/Map";
}

template<>
struct has_fixed_size<info_interfaces::msg::Map>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<info_interfaces::msg::Map>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<info_interfaces::msg::Map>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INFO_INTERFACES__MSG__DETAIL__MAP__TRAITS_HPP_
