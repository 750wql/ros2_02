// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from info_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
#define INFO_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'our_robot'
// Member 'enemy'
#include "info_interfaces/msg/detail/point__struct.h"

/// Struct defined in msg/Robot in the package info_interfaces.
typedef struct info_interfaces__msg__Robot
{
  info_interfaces__msg__Point our_robot;
  info_interfaces__msg__Point__Sequence enemy;
} info_interfaces__msg__Robot;

// Struct for a sequence of info_interfaces__msg__Robot.
typedef struct info_interfaces__msg__Robot__Sequence
{
  info_interfaces__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} info_interfaces__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INFO_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
