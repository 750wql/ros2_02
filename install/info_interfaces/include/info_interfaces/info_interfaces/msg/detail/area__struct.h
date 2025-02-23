// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__AREA__STRUCT_H_
#define INFO_INTERFACES__MSG__DETAIL__AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'base'
// Member 'recover'
// Member 'password'
// Member 'green_in'
// Member 'green_out'
// Member 'purple_in'
// Member 'purple_out'
// Member 'hp'
#include "info_interfaces/msg/detail/point__struct.h"

/// Struct defined in msg/Area in the package info_interfaces.
typedef struct info_interfaces__msg__Area
{
  info_interfaces__msg__Point base;
  info_interfaces__msg__Point recover;
  info_interfaces__msg__Point password;
  info_interfaces__msg__Point green_in;
  info_interfaces__msg__Point green_out;
  info_interfaces__msg__Point purple_in;
  info_interfaces__msg__Point purple_out;
  info_interfaces__msg__Point hp;
} info_interfaces__msg__Area;

// Struct for a sequence of info_interfaces__msg__Area.
typedef struct info_interfaces__msg__Area__Sequence
{
  info_interfaces__msg__Area * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} info_interfaces__msg__Area__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INFO_INTERFACES__MSG__DETAIL__AREA__STRUCT_H_
