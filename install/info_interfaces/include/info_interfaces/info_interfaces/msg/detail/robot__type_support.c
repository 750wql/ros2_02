// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from info_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "info_interfaces/msg/detail/robot__rosidl_typesupport_introspection_c.h"
#include "info_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "info_interfaces/msg/detail/robot__functions.h"
#include "info_interfaces/msg/detail/robot__struct.h"


// Include directives for member types
// Member `our_robot`
// Member `enemy`
#include "info_interfaces/msg/point.h"
// Member `our_robot`
// Member `enemy`
#include "info_interfaces/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  info_interfaces__msg__Robot__init(message_memory);
}

void info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_fini_function(void * message_memory)
{
  info_interfaces__msg__Robot__fini(message_memory);
}

size_t info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__size_function__Robot__enemy(
  const void * untyped_member)
{
  const info_interfaces__msg__Point__Sequence * member =
    (const info_interfaces__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__get_const_function__Robot__enemy(
  const void * untyped_member, size_t index)
{
  const info_interfaces__msg__Point__Sequence * member =
    (const info_interfaces__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__get_function__Robot__enemy(
  void * untyped_member, size_t index)
{
  info_interfaces__msg__Point__Sequence * member =
    (info_interfaces__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__fetch_function__Robot__enemy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const info_interfaces__msg__Point * item =
    ((const info_interfaces__msg__Point *)
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__get_const_function__Robot__enemy(untyped_member, index));
  info_interfaces__msg__Point * value =
    (info_interfaces__msg__Point *)(untyped_value);
  *value = *item;
}

void info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__assign_function__Robot__enemy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  info_interfaces__msg__Point * item =
    ((info_interfaces__msg__Point *)
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__get_function__Robot__enemy(untyped_member, index));
  const info_interfaces__msg__Point * value =
    (const info_interfaces__msg__Point *)(untyped_value);
  *item = *value;
}

bool info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__resize_function__Robot__enemy(
  void * untyped_member, size_t size)
{
  info_interfaces__msg__Point__Sequence * member =
    (info_interfaces__msg__Point__Sequence *)(untyped_member);
  info_interfaces__msg__Point__Sequence__fini(member);
  return info_interfaces__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array[2] = {
  {
    "our_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Robot, our_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enemy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(info_interfaces__msg__Robot, enemy),  // bytes offset in struct
    NULL,  // default value
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__size_function__Robot__enemy,  // size() function pointer
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__get_const_function__Robot__enemy,  // get_const(index) function pointer
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__get_function__Robot__enemy,  // get(index) function pointer
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__fetch_function__Robot__enemy,  // fetch(index, &value) function pointer
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__assign_function__Robot__enemy,  // assign(index, value) function pointer
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__resize_function__Robot__enemy  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_members = {
  "info_interfaces__msg",  // message namespace
  "Robot",  // message name
  2,  // number of fields
  sizeof(info_interfaces__msg__Robot),
  info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array,  // message members
  info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_init_function,  // function to initialize message memory (memory has to be allocated)
  info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle = {
  0,
  &info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_info_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Robot)() {
  info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, info_interfaces, msg, Point)();
  if (!info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle.typesupport_identifier) {
    info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &info_interfaces__msg__Robot__rosidl_typesupport_introspection_c__Robot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
