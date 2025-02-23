// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from info_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__POINT__STRUCT_H_
#define INFO_INTERFACES__MSG__DETAIL__POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point in the package info_interfaces.
typedef struct info_interfaces__msg__Point
{
  uint32_t x;
  uint32_t y;
} info_interfaces__msg__Point;

// Struct for a sequence of info_interfaces__msg__Point.
typedef struct info_interfaces__msg__Point__Sequence
{
  info_interfaces__msg__Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} info_interfaces__msg__Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INFO_INTERFACES__MSG__DETAIL__POINT__STRUCT_H_
