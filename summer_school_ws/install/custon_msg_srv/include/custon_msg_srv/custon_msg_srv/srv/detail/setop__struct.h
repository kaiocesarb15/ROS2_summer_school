// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custon_msg_srv:srv/Setop.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__SRV__DETAIL__SETOP__STRUCT_H_
#define CUSTON_MSG_SRV__SRV__DETAIL__SETOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'op'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Setop in the package custon_msg_srv.
typedef struct custon_msg_srv__srv__Setop_Request
{
  rosidl_runtime_c__String op;
} custon_msg_srv__srv__Setop_Request;

// Struct for a sequence of custon_msg_srv__srv__Setop_Request.
typedef struct custon_msg_srv__srv__Setop_Request__Sequence
{
  custon_msg_srv__srv__Setop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custon_msg_srv__srv__Setop_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Setop in the package custon_msg_srv.
typedef struct custon_msg_srv__srv__Setop_Response
{
  bool success;
  rosidl_runtime_c__String message;
} custon_msg_srv__srv__Setop_Response;

// Struct for a sequence of custon_msg_srv__srv__Setop_Response.
typedef struct custon_msg_srv__srv__Setop_Response__Sequence
{
  custon_msg_srv__srv__Setop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custon_msg_srv__srv__Setop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTON_MSG_SRV__SRV__DETAIL__SETOP__STRUCT_H_
