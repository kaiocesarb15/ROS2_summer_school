// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custon_msg_srv:msg/TwoFloat64.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__STRUCT_H_
#define CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TwoFloat64 in the package custon_msg_srv.
typedef struct custon_msg_srv__msg__TwoFloat64
{
  double num1;
  double num2;
} custon_msg_srv__msg__TwoFloat64;

// Struct for a sequence of custon_msg_srv__msg__TwoFloat64.
typedef struct custon_msg_srv__msg__TwoFloat64__Sequence
{
  custon_msg_srv__msg__TwoFloat64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custon_msg_srv__msg__TwoFloat64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTON_MSG_SRV__MSG__DETAIL__TWO_FLOAT64__STRUCT_H_
