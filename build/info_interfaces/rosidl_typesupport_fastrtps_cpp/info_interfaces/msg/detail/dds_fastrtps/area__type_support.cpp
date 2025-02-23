// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice
#include "info_interfaces/msg/detail/area__rosidl_typesupport_fastrtps_cpp.hpp"
#include "info_interfaces/msg/detail/area__struct.hpp"

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
bool cdr_serialize(
  const info_interfaces::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  info_interfaces::msg::Point &);
size_t get_serialized_size(
  const info_interfaces::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace info_interfaces

// functions for info_interfaces::msg::Point already declared above

// functions for info_interfaces::msg::Point already declared above

// functions for info_interfaces::msg::Point already declared above

// functions for info_interfaces::msg::Point already declared above

// functions for info_interfaces::msg::Point already declared above

// functions for info_interfaces::msg::Point already declared above

// functions for info_interfaces::msg::Point already declared above


namespace info_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
cdr_serialize(
  const info_interfaces::msg::Area & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.base,
    cdr);
  // Member: recover
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.recover,
    cdr);
  // Member: password
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.password,
    cdr);
  // Member: green_in
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.green_in,
    cdr);
  // Member: green_out
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.green_out,
    cdr);
  // Member: purple_in
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.purple_in,
    cdr);
  // Member: purple_out
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.purple_out,
    cdr);
  // Member: hp
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.hp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  info_interfaces::msg::Area & ros_message)
{
  // Member: base
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.base);

  // Member: recover
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.recover);

  // Member: password
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.password);

  // Member: green_in
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.green_in);

  // Member: green_out
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.green_out);

  // Member: purple_in
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.purple_in);

  // Member: purple_out
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.purple_out);

  // Member: hp
  info_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.hp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
get_serialized_size(
  const info_interfaces::msg::Area & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.base, current_alignment);
  // Member: recover

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.recover, current_alignment);
  // Member: password

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.password, current_alignment);
  // Member: green_in

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.green_in, current_alignment);
  // Member: green_out

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.green_out, current_alignment);
  // Member: purple_in

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.purple_in, current_alignment);
  // Member: purple_out

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.purple_out, current_alignment);
  // Member: hp

  current_alignment +=
    info_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.hp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_info_interfaces
max_serialized_size_Area(
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


  // Member: base
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: recover
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: password
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: green_in
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: green_out
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: purple_in
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: purple_out
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: hp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        info_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = info_interfaces::msg::Area;
    is_plain =
      (
      offsetof(DataType, hp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Area__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const info_interfaces::msg::Area *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Area__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<info_interfaces::msg::Area *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Area__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const info_interfaces::msg::Area *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Area__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Area(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Area__callbacks = {
  "info_interfaces::msg",
  "Area",
  _Area__cdr_serialize,
  _Area__cdr_deserialize,
  _Area__get_serialized_size,
  _Area__max_serialized_size
};

static rosidl_message_type_support_t _Area__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Area__callbacks,
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
get_message_type_support_handle<info_interfaces::msg::Area>()
{
  return &info_interfaces::msg::typesupport_fastrtps_cpp::_Area__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, info_interfaces, msg, Area)() {
  return &info_interfaces::msg::typesupport_fastrtps_cpp::_Area__handle;
}

#ifdef __cplusplus
}
#endif
