// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgs_package:srv/BugService.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__STRUCT_HPP_
#define MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msgs_package__srv__BugService_Request __attribute__((deprecated))
#else
# define DEPRECATED__msgs_package__srv__BugService_Request __declspec(deprecated)
#endif

namespace msgs_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BugService_Request_
{
  using Type = BugService_Request_<ContainerAllocator>;

  explicit BugService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit BugService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_package::srv::BugService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_package::srv::BugService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::BugService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::BugService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_package__srv__BugService_Request
    std::shared_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_package__srv__BugService_Request
    std::shared_ptr<msgs_package::srv::BugService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BugService_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const BugService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BugService_Request_

// alias to use template instance with default allocator
using BugService_Request =
  msgs_package::srv::BugService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msgs_package


#ifndef _WIN32
# define DEPRECATED__msgs_package__srv__BugService_Response __attribute__((deprecated))
#else
# define DEPRECATED__msgs_package__srv__BugService_Response __declspec(deprecated)
#endif

namespace msgs_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BugService_Response_
{
  using Type = BugService_Response_<ContainerAllocator>;

  explicit BugService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit BugService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_package::srv::BugService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_package::srv::BugService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::BugService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::BugService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_package__srv__BugService_Response
    std::shared_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_package__srv__BugService_Response
    std::shared_ptr<msgs_package::srv::BugService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BugService_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BugService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BugService_Response_

// alias to use template instance with default allocator
using BugService_Response =
  msgs_package::srv::BugService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msgs_package

namespace msgs_package
{

namespace srv
{

struct BugService
{
  using Request = msgs_package::srv::BugService_Request;
  using Response = msgs_package::srv::BugService_Response;
};

}  // namespace srv

}  // namespace msgs_package

#endif  // MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__STRUCT_HPP_
