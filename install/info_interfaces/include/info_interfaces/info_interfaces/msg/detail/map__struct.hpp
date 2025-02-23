// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from info_interfaces:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef INFO_INTERFACES__MSG__DETAIL__MAP__STRUCT_HPP_
#define INFO_INTERFACES__MSG__DETAIL__MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__info_interfaces__msg__Map __attribute__((deprecated))
#else
# define DEPRECATED__info_interfaces__msg__Map __declspec(deprecated)
#endif

namespace info_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Map_
{
  using Type = Map_<ContainerAllocator>;

  explicit Map_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = 0ul;
      this->col = 0ul;
      this->grid_width = 0ul;
      this->grid_height = 0ul;
    }
  }

  explicit Map_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = 0ul;
      this->col = 0ul;
      this->grid_width = 0ul;
      this->grid_height = 0ul;
    }
  }

  // field types and members
  using _row_type =
    uint32_t;
  _row_type row;
  using _col_type =
    uint32_t;
  _col_type col;
  using _grid_width_type =
    uint32_t;
  _grid_width_type grid_width;
  using _grid_height_type =
    uint32_t;
  _grid_height_type grid_height;
  using _mat_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _mat_type mat;

  // setters for named parameter idiom
  Type & set__row(
    const uint32_t & _arg)
  {
    this->row = _arg;
    return *this;
  }
  Type & set__col(
    const uint32_t & _arg)
  {
    this->col = _arg;
    return *this;
  }
  Type & set__grid_width(
    const uint32_t & _arg)
  {
    this->grid_width = _arg;
    return *this;
  }
  Type & set__grid_height(
    const uint32_t & _arg)
  {
    this->grid_height = _arg;
    return *this;
  }
  Type & set__mat(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->mat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    info_interfaces::msg::Map_<ContainerAllocator> *;
  using ConstRawPtr =
    const info_interfaces::msg::Map_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<info_interfaces::msg::Map_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<info_interfaces::msg::Map_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      info_interfaces::msg::Map_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<info_interfaces::msg::Map_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      info_interfaces::msg::Map_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<info_interfaces::msg::Map_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<info_interfaces::msg::Map_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<info_interfaces::msg::Map_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__info_interfaces__msg__Map
    std::shared_ptr<info_interfaces::msg::Map_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__info_interfaces__msg__Map
    std::shared_ptr<info_interfaces::msg::Map_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Map_ & other) const
  {
    if (this->row != other.row) {
      return false;
    }
    if (this->col != other.col) {
      return false;
    }
    if (this->grid_width != other.grid_width) {
      return false;
    }
    if (this->grid_height != other.grid_height) {
      return false;
    }
    if (this->mat != other.mat) {
      return false;
    }
    return true;
  }
  bool operator!=(const Map_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Map_

// alias to use template instance with default allocator
using Map =
  info_interfaces::msg::Map_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace info_interfaces

#endif  // INFO_INTERFACES__MSG__DETAIL__MAP__STRUCT_HPP_
