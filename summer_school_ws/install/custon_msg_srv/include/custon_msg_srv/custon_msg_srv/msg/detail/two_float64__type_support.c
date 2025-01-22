// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custon_msg_srv:msg/TwoFloat64.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custon_msg_srv/msg/detail/two_float64__rosidl_typesupport_introspection_c.h"
#include "custon_msg_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custon_msg_srv/msg/detail/two_float64__functions.h"
#include "custon_msg_srv/msg/detail/two_float64__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custon_msg_srv__msg__TwoFloat64__init(message_memory);
}

void custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_fini_function(void * message_memory)
{
  custon_msg_srv__msg__TwoFloat64__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_member_array[2] = {
  {
    "num1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custon_msg_srv__msg__TwoFloat64, num1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custon_msg_srv__msg__TwoFloat64, num2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_members = {
  "custon_msg_srv__msg",  // message namespace
  "TwoFloat64",  // message name
  2,  // number of fields
  sizeof(custon_msg_srv__msg__TwoFloat64),
  custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_member_array,  // message members
  custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_init_function,  // function to initialize message memory (memory has to be allocated)
  custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_type_support_handle = {
  0,
  &custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custon_msg_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custon_msg_srv, msg, TwoFloat64)() {
  if (!custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_type_support_handle.typesupport_identifier) {
    custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custon_msg_srv__msg__TwoFloat64__rosidl_typesupport_introspection_c__TwoFloat64_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
