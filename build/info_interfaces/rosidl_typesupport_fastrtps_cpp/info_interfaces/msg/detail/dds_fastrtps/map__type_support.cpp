// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from info_interfaces:msg/Map.idl
// generated code does not contain a copyright notice
#include "info_interfaces/msg/detail/map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "info_interfaces/msg/detail/map__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace info_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
cdr_serialize(
  const info_interfaces::msg::Map & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: row
  cdr << ros_message.row;
  // Member: col
  cdr << ros_message.col;
  // Member: grid_width
  cdr << ros_message.grid_width;
  // Member: grid_height
  cdr << ros_message.grid_height;
  // Member: mat
  {
    cdr << ros_message.mat;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  info_interfaces::msg::Map & ros_message)
{
  // Member: row
  cdr >> ros_message.row;

  // Member: col
  cdr >> ros_message.col;

  // Member: grid_width
  cdr >> ros_message.grid_width;

  // Member: grid_height
  cdr >> ros_message.grid_height;

  // Member: mat
  {
    cdr >> ros_message.mat;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
get_serialized_size(
  const info_interfaces::msg::Map & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: row
  {
    size_t item_size = sizeof(ros_message.row);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: col
  {
    size_t item_size = sizeof(ros_message.col);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grid_width
  {
    size_t item_size = sizeof(ros_message.grid_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: grid_height
  {
    size_t item_size = sizeof(ros_message.grid_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mat
  {
    size_t array_size = ros_message.mat.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.mat[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
max_serialized_size_Map(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: row
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: col
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: grid_width
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: grid_height
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mat
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = info_interfaces::msg::Map;
    is_plain =
      (
      offsetof(DataType, mat) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Map__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const info_interfaces::msg::Map *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Map__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<info_interfaces::msg::Map *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Map__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const info_interfaces::msg::Map *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Map__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Map(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Map__callbacks = {
  "info_interfaces::msg",
  "Map",
  _Map__cdr_serialize,
  _Map__cdr_deserialize,
  _Map__get_serialized_size,
  _Map__max_serialized_size
};

static rosidl_message_type_support_t _Map__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Map__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace info_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_info_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<info_interfaces::msg::Map>()
{
  return &info_interfaces::msg::typesupport_fastrtps_cpp::_Map__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, info_interfaces, msg, Map)() {
  return &info_interfaces::msg::typesupport_fastrtps_cpp::_Map__handle;
}

#ifdef __cplusplus
}
#endif
