// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice
#include "info_interfaces/msg/detail/area__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "info_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "info_interfaces/msg/detail/area__struct.h"
#include "info_interfaces/msg/detail/area__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "info_interfaces/msg/detail/point__functions.h"  // base, green_in, green_out, hp, password, purple_in, purple_out, recover

// forward declare type support functions
size_t get_serialized_size_info_interfaces__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_info_interfaces__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point)();


using _Area__ros_msg_type = info_interfaces__msg__Area;

static bool _Area__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Area__ros_msg_type * ros_message = static_cast<const _Area__ros_msg_type *>(untyped_ros_message);
  // Field name: base
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->base, cdr))
    {
      return false;
    }
  }

  // Field name: recover
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->recover, cdr))
    {
      return false;
    }
  }

  // Field name: password
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->password, cdr))
    {
      return false;
    }
  }

  // Field name: green_in
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->green_in, cdr))
    {
      return false;
    }
  }

  // Field name: green_out
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->green_out, cdr))
    {
      return false;
    }
  }

  // Field name: purple_in
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->purple_in, cdr))
    {
      return false;
    }
  }

  // Field name: purple_out
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->purple_out, cdr))
    {
      return false;
    }
  }

  // Field name: hp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->hp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Area__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Area__ros_msg_type * ros_message = static_cast<_Area__ros_msg_type *>(untyped_ros_message);
  // Field name: base
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->base))
    {
      return false;
    }
  }

  // Field name: recover
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->recover))
    {
      return false;
    }
  }

  // Field name: password
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->password))
    {
      return false;
    }
  }

  // Field name: green_in
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->green_in))
    {
      return false;
    }
  }

  // Field name: green_out
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->green_out))
    {
      return false;
    }
  }

  // Field name: purple_in
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->purple_in))
    {
      return false;
    }
  }

  // Field name: purple_out
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->purple_out))
    {
      return false;
    }
  }

  // Field name: hp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, info_interfaces, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->hp))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_info_interfaces
size_t get_serialized_size_info_interfaces__msg__Area(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Area__ros_msg_type * ros_message = static_cast<const _Area__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->base), current_alignment);
  // field.name recover

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->recover), current_alignment);
  // field.name password

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->password), current_alignment);
  // field.name green_in

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->green_in), current_alignment);
  // field.name green_out

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->green_out), current_alignment);
  // field.name purple_in

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->purple_in), current_alignment);
  // field.name purple_out

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->purple_out), current_alignment);
  // field.name hp

  current_alignment += get_serialized_size_info_interfaces__msg__Point(
    &(ros_message->hp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Area__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_info_interfaces__msg__Area(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_info_interfaces
size_t max_serialized_size_info_interfaces__msg__Area(
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

  // member: base
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: recover
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: password
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: green_in
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: green_out
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: purple_in
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: purple_out
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: hp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_info_interfaces__msg__Point(
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
    using DataType = info_interfaces__msg__Area;
    is_plain =
      (
      offsetof(DataType, hp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Area__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_info_interfaces__msg__Area(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Area = {
  "info_interfaces::msg",
  "Area",
  _Area__cdr_serialize,
  _Area__cdr_deserialize,
  _Area__get_serialized_size,
  _Area__max_serialized_size
};

static rosidl_message_type_support_t _Area__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Area,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, info_interfaces, msg, Area)() {
  return &_Area__type_support;
}

#if defined(__cplusplus)
}
#endif
