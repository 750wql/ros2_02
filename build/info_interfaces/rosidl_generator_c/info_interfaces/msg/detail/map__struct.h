// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from info_interfaces:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__MAP__STRUCT_H_
#define INFO_INTERFACES__MSG__DETAIL__MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mat'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Map in the package info_interfaces.
typedef struct info_interfaces__msg__Map
{
  uint32_t row;
  uint32_t col;
  uint32_t grid_width;
  uint32_t grid_height;
  rosidl_runtime_c__uint8__Sequence mat;
} info_interfaces__msg__Map;

// Struct for a sequence of info_interfaces__msg__Map.
typedef struct info_interfaces__msg__Map__Sequence
{
  info_interfaces__msg__Map * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} info_interfaces__msg__Map__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INFO_INTERFACES__MSG__DETAIL__MAP__STRUCT_H_
