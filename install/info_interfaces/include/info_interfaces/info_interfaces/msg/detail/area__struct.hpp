// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__AREA__STRUCT_HPP_
#define INFO_INTERFACES__MSG__DETAIL__AREA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'base'
// Member 'recover'
// Member 'password'
// Member 'green_in'
// Member 'green_out'
// Member 'purple_in'
// Member 'purple_out'
// Member 'hp'
#include "info_interfaces/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__info_interfaces__msg__Area __attribute__((deprecated))
#else
# define DEPRECATED__info_interfaces__msg__Area __declspec(deprecated)
#endif

namespace info_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Area_
{
  using Type = Area_<ContainerAllocator>;

  explicit Area_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base(_init),
    recover(_init),
    password(_init),
    green_in(_init),
    green_out(_init),
    purple_in(_init),
    purple_out(_init),
    hp(_init)
  {
    (void)_init;
  }

  explicit Area_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base(_alloc, _init),
    recover(_alloc, _init),
    password(_alloc, _init),
    green_in(_alloc, _init),
    green_out(_alloc, _init),
    purple_in(_alloc, _init),
    purple_out(_alloc, _init),
    hp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _base_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _base_type base;
  using _recover_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _recover_type recover;
  using _password_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _password_type password;
  using _green_in_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _green_in_type green_in;
  using _green_out_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _green_out_type green_out;
  using _purple_in_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _purple_in_type purple_in;
  using _purple_out_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _purple_out_type purple_out;
  using _hp_type =
    info_interfaces::msg::Point_<ContainerAllocator>;
  _hp_type hp;

  // setters for named parameter idiom
  Type & set__base(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->base = _arg;
    return *this;
  }
  Type & set__recover(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->recover = _arg;
    return *this;
  }
  Type & set__password(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->password = _arg;
    return *this;
  }
  Type & set__green_in(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->green_in = _arg;
    return *this;
  }
  Type & set__green_out(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->green_out = _arg;
    return *this;
  }
  Type & set__purple_in(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->purple_in = _arg;
    return *this;
  }
  Type & set__purple_out(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->purple_out = _arg;
    return *this;
  }
  Type & set__hp(
    const info_interfaces::msg::Point_<ContainerAllocator> & _arg)
  {
    this->hp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    info_interfaces::msg::Area_<ContainerAllocator> *;
  using ConstRawPtr =
    const info_interfaces::msg::Area_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<info_interfaces::msg::Area_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<info_interfaces::msg::Area_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      info_interfaces::msg::Area_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<info_interfaces::msg::Area_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      info_interfaces::msg::Area_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<info_interfaces::msg::Area_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<info_interfaces::msg::Area_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<info_interfaces::msg::Area_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__info_interfaces__msg__Area
    std::shared_ptr<info_interfaces::msg::Area_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__info_interfaces__msg__Area
    std::shared_ptr<info_interfaces::msg::Area_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Area_ & other) const
  {
    if (this->base != other.base) {
      return false;
    }
    if (this->recover != other.recover) {
      return false;
    }
    if (this->password != other.password) {
      return false;
    }
    if (this->green_in != other.green_in) {
      return false;
    }
    if (this->green_out != other.green_out) {
      return false;
    }
    if (this->purple_in != other.purple_in) {
      return false;
    }
    if (this->purple_out != other.purple_out) {
      return false;
    }
    if (this->hp != other.hp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Area_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Area_

// alias to use template instance with default allocator
using Area =
  info_interfaces::msg::Area_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace info_interfaces

#endif  // INFO_INTERFACES__MSG__DETAIL__AREA__STRUCT_HPP_
