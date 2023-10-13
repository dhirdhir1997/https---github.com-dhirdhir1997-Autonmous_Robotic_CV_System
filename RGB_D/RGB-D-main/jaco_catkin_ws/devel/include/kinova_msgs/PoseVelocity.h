// Generated by gencpp from file kinova_msgs/PoseVelocity.msg
// DO NOT EDIT!


#ifndef KINOVA_MSGS_MESSAGE_POSEVELOCITY_H
#define KINOVA_MSGS_MESSAGE_POSEVELOCITY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kinova_msgs
{
template <class ContainerAllocator>
struct PoseVelocity_
{
  typedef PoseVelocity_<ContainerAllocator> Type;

  PoseVelocity_()
    : twist_linear_x(0.0)
    , twist_linear_y(0.0)
    , twist_linear_z(0.0)
    , twist_angular_x(0.0)
    , twist_angular_y(0.0)
    , twist_angular_z(0.0)  {
    }
  PoseVelocity_(const ContainerAllocator& _alloc)
    : twist_linear_x(0.0)
    , twist_linear_y(0.0)
    , twist_linear_z(0.0)
    , twist_angular_x(0.0)
    , twist_angular_y(0.0)
    , twist_angular_z(0.0)  {
  (void)_alloc;
    }



   typedef float _twist_linear_x_type;
  _twist_linear_x_type twist_linear_x;

   typedef float _twist_linear_y_type;
  _twist_linear_y_type twist_linear_y;

   typedef float _twist_linear_z_type;
  _twist_linear_z_type twist_linear_z;

   typedef float _twist_angular_x_type;
  _twist_angular_x_type twist_angular_x;

   typedef float _twist_angular_y_type;
  _twist_angular_y_type twist_angular_y;

   typedef float _twist_angular_z_type;
  _twist_angular_z_type twist_angular_z;





  typedef boost::shared_ptr< ::kinova_msgs::PoseVelocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kinova_msgs::PoseVelocity_<ContainerAllocator> const> ConstPtr;

}; // struct PoseVelocity_

typedef ::kinova_msgs::PoseVelocity_<std::allocator<void> > PoseVelocity;

typedef boost::shared_ptr< ::kinova_msgs::PoseVelocity > PoseVelocityPtr;
typedef boost::shared_ptr< ::kinova_msgs::PoseVelocity const> PoseVelocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kinova_msgs::PoseVelocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kinova_msgs::PoseVelocity_<ContainerAllocator1> & lhs, const ::kinova_msgs::PoseVelocity_<ContainerAllocator2> & rhs)
{
  return lhs.twist_linear_x == rhs.twist_linear_x &&
    lhs.twist_linear_y == rhs.twist_linear_y &&
    lhs.twist_linear_z == rhs.twist_linear_z &&
    lhs.twist_angular_x == rhs.twist_angular_x &&
    lhs.twist_angular_y == rhs.twist_angular_y &&
    lhs.twist_angular_z == rhs.twist_angular_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kinova_msgs::PoseVelocity_<ContainerAllocator1> & lhs, const ::kinova_msgs::PoseVelocity_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kinova_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kinova_msgs::PoseVelocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinova_msgs::PoseVelocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinova_msgs::PoseVelocity_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "37cb696ff239fbcc6aa4a04f7318d9da";
  }

  static const char* value(const ::kinova_msgs::PoseVelocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x37cb696ff239fbccULL;
  static const uint64_t static_value2 = 0x6aa4a04f7318d9daULL;
};

template<class ContainerAllocator>
struct DataType< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kinova_msgs/PoseVelocity";
  }

  static const char* value(const ::kinova_msgs::PoseVelocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 twist_linear_x\n"
"float32 twist_linear_y\n"
"float32 twist_linear_z\n"
"float32 twist_angular_x\n"
"float32 twist_angular_y\n"
"float32 twist_angular_z\n"
;
  }

  static const char* value(const ::kinova_msgs::PoseVelocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.twist_linear_x);
      stream.next(m.twist_linear_y);
      stream.next(m.twist_linear_z);
      stream.next(m.twist_angular_x);
      stream.next(m.twist_angular_y);
      stream.next(m.twist_angular_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoseVelocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kinova_msgs::PoseVelocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kinova_msgs::PoseVelocity_<ContainerAllocator>& v)
  {
    s << indent << "twist_linear_x: ";
    Printer<float>::stream(s, indent + "  ", v.twist_linear_x);
    s << indent << "twist_linear_y: ";
    Printer<float>::stream(s, indent + "  ", v.twist_linear_y);
    s << indent << "twist_linear_z: ";
    Printer<float>::stream(s, indent + "  ", v.twist_linear_z);
    s << indent << "twist_angular_x: ";
    Printer<float>::stream(s, indent + "  ", v.twist_angular_x);
    s << indent << "twist_angular_y: ";
    Printer<float>::stream(s, indent + "  ", v.twist_angular_y);
    s << indent << "twist_angular_z: ";
    Printer<float>::stream(s, indent + "  ", v.twist_angular_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KINOVA_MSGS_MESSAGE_POSEVELOCITY_H
