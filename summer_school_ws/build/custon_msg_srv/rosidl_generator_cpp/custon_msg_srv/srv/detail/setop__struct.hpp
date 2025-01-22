// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custon_msg_srv:srv/Setop.idl
// generated code does not contain a copyright notice

#ifndef CUSTON_MSG_SRV__SRV__DETAIL__SETOP__STRUCT_HPP_
#define CUSTON_MSG_SRV__SRV__DETAIL__SETOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custon_msg_srv__srv__Setop_Request __attribute__((deprecated))
#else
# define DEPRECATED__custon_msg_srv__srv__Setop_Request __declspec(deprecated)
#endif

namespace custon_msg_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Setop_Request_
{
  using Type = Setop_Request_<ContainerAllocator>;

  explicit Setop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op = "";
    }
  }

  explicit Setop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : op(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->op = "";
    }
  }

  // field types and members
  using _op_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _op_type op;

  // setters for named parameter idiom
  Type & set__op(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->op = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custon_msg_srv::srv::Setop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custon_msg_srv::srv::Setop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custon_msg_srv::srv::Setop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custon_msg_srv::srv::Setop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custon_msg_srv__srv__Setop_Request
    std::shared_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custon_msg_srv__srv__Setop_Request
    std::shared_ptr<custon_msg_srv::srv::Setop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Setop_Request_ & other) const
  {
    if (this->op != other.op) {
      return false;
    }
    return true;
  }
  bool operator!=(const Setop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Setop_Request_

// alias to use template instance with default allocator
using Setop_Request =
  custon_msg_srv::srv::Setop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custon_msg_srv


#ifndef _WIN32
# define DEPRECATED__custon_msg_srv__srv__Setop_Response __attribute__((deprecated))
#else
# define DEPRECATED__custon_msg_srv__srv__Setop_Response __declspec(deprecated)
#endif

namespace custon_msg_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Setop_Response_
{
  using Type = Setop_Response_<ContainerAllocator>;

  explicit Setop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Setop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custon_msg_srv::srv::Setop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custon_msg_srv::srv::Setop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custon_msg_srv::srv::Setop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custon_msg_srv::srv::Setop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custon_msg_srv__srv__Setop_Response
    std::shared_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custon_msg_srv__srv__Setop_Response
    std::shared_ptr<custon_msg_srv::srv::Setop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Setop_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Setop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Setop_Response_

// alias to use template instance with default allocator
using Setop_Response =
  custon_msg_srv::srv::Setop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custon_msg_srv

namespace custon_msg_srv
{

namespace srv
{

struct Setop
{
  using Request = custon_msg_srv::srv::Setop_Request;
  using Response = custon_msg_srv::srv::Setop_Response;
};

}  // namespace srv

}  // namespace custon_msg_srv

#endif  // CUSTON_MSG_SRV__SRV__DETAIL__SETOP__STRUCT_HPP_
