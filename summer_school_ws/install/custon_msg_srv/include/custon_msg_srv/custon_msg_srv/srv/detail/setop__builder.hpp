// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custon_msg_srv:srv/Setop.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__SRV__DETAIL__SETOP__BUILDER_HPP_
#define CUSTON_MSG_SRV__SRV__DETAIL__SETOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custon_msg_srv/srv/detail/setop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custon_msg_srv
{

namespace srv
{

namespace builder
{

class Init_Setop_Request_op
{
public:
  Init_Setop_Request_op()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custon_msg_srv::srv::Setop_Request op(::custon_msg_srv::srv::Setop_Request::_op_type arg)
  {
    msg_.op = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custon_msg_srv::srv::Setop_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custon_msg_srv::srv::Setop_Request>()
{
  return custon_msg_srv::srv::builder::Init_Setop_Request_op();
}

}  // namespace custon_msg_srv


namespace custon_msg_srv
{

namespace srv
{

namespace builder
{

class Init_Setop_Response_message
{
public:
  explicit Init_Setop_Response_message(::custon_msg_srv::srv::Setop_Response & msg)
  : msg_(msg)
  {}
  ::custon_msg_srv::srv::Setop_Response message(::custon_msg_srv::srv::Setop_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custon_msg_srv::srv::Setop_Response msg_;
};

class Init_Setop_Response_success
{
public:
  Init_Setop_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Setop_Response_message success(::custon_msg_srv::srv::Setop_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Setop_Response_message(msg_);
  }

private:
  ::custon_msg_srv::srv::Setop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custon_msg_srv::srv::Setop_Response>()
{
  return custon_msg_srv::srv::builder::Init_Setop_Response_success();
}

}  // namespace custon_msg_srv

#endif  // CUSTON_MSG_SRV__SRV__DETAIL__SETOP__BUILDER_HPP_
