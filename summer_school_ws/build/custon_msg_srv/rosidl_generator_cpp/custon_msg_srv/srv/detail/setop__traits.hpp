// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custon_msg_srv:srv/Setop.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__SRV__DETAIL__SETOP__TRAITS_HPP_
#define CUSTON_MSG_SRV__SRV__DETAIL__SETOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custon_msg_srv/srv/detail/setop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custon_msg_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Setop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: op
  {
    out << "op: ";
    rosidl_generator_traits::value_to_yaml(msg.op, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Setop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: op
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "op: ";
    rosidl_generator_traits::value_to_yaml(msg.op, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Setop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custon_msg_srv

namespace rosidl_generator_traits
{

[[deprecated("use custon_msg_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custon_msg_srv::srv::Setop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custon_msg_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custon_msg_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custon_msg_srv::srv::Setop_Request & msg)
{
  return custon_msg_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custon_msg_srv::srv::Setop_Request>()
{
  return "custon_msg_srv::srv::Setop_Request";
}

template<>
inline const char * name<custon_msg_srv::srv::Setop_Request>()
{
  return "custon_msg_srv/srv/Setop_Request";
}

template<>
struct has_fixed_size<custon_msg_srv::srv::Setop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custon_msg_srv::srv::Setop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custon_msg_srv::srv::Setop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custon_msg_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Setop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Setop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Setop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custon_msg_srv

namespace rosidl_generator_traits
{

[[deprecated("use custon_msg_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custon_msg_srv::srv::Setop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custon_msg_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custon_msg_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const custon_msg_srv::srv::Setop_Response & msg)
{
  return custon_msg_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custon_msg_srv::srv::Setop_Response>()
{
  return "custon_msg_srv::srv::Setop_Response";
}

template<>
inline const char * name<custon_msg_srv::srv::Setop_Response>()
{
  return "custon_msg_srv/srv/Setop_Response";
}

template<>
struct has_fixed_size<custon_msg_srv::srv::Setop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custon_msg_srv::srv::Setop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custon_msg_srv::srv::Setop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custon_msg_srv::srv::Setop>()
{
  return "custon_msg_srv::srv::Setop";
}

template<>
inline const char * name<custon_msg_srv::srv::Setop>()
{
  return "custon_msg_srv/srv/Setop";
}

template<>
struct has_fixed_size<custon_msg_srv::srv::Setop>
  : std::integral_constant<
    bool,
    has_fixed_size<custon_msg_srv::srv::Setop_Request>::value &&
    has_fixed_size<custon_msg_srv::srv::Setop_Response>::value
  >
{
};

template<>
struct has_bounded_size<custon_msg_srv::srv::Setop>
  : std::integral_constant<
    bool,
    has_bounded_size<custon_msg_srv::srv::Setop_Request>::value &&
    has_bounded_size<custon_msg_srv::srv::Setop_Response>::value
  >
{
};

template<>
struct is_service<custon_msg_srv::srv::Setop>
  : std::true_type
{
};

template<>
struct is_service_request<custon_msg_srv::srv::Setop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custon_msg_srv::srv::Setop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTON_MSG_SRV__SRV__DETAIL__SETOP__TRAITS_HPP_
