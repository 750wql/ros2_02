// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "info_interfaces/msg/detail/area__rosidl_typesupport_introspection_c.h"
#include "info_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "info_interfaces/msg/detail/area__functions.h"
#include "info_interfaces/msg/detail/area__struct.h"


// Include directives for member types
// Member `base`
// Member `recover`
// Member `password`
// Member `green_in`
// Member `green_out`
// Member `purple_in`
// Member `purple_out`
// Member `hp`
#include "info_interfaces/msg/point.h"
// Member `base`
// Member `recover`
// Member `password`
// Member `green_in`
// Member `green_out`
// Member `purple_in`
// Member `purple_out`
// Member `hp`
#include "info_interfaces/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  info_interfaces__msg__Area__init(message_memory);
}

void info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_fini_function(void * message_memory)
{
  info_interfaces__msg__Area__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[8] = {
  {
    "base",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, base),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recover",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, recover),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "password",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, password),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green_in",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, green_in),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, green_out),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "purple_in",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, purple_in),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "purple_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, purple_out),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Area, hp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_members = {
  "info_interfaces__msg",  // message namespace
  "Area",  // message name
  8,  // number of fields
  sizeof(info_interfaces__msg__Area),
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array,  // message members
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_init_function,  // function to initialize message memory (memory has to be allocated)
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_type_support_handle = {
  0,
  &info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_info_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Area)() {
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  if (!info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_type_support_handle.typesupport_identifier) {
    info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &info_interfaces__msg__Area__rosidl_typesupport_introspection_c__Area_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
