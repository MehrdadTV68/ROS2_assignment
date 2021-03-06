// Generated by gencpp from file robot_description/BugServiceRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_DESCRIPTION_MESSAGE_BUGSERVICEREQUEST_H
#define ROBOT_DESCRIPTION_MESSAGE_BUGSERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_description
{
template <class ContainerAllocator>
struct BugServiceRequest_
{
  typedef BugServiceRequest_<ContainerAllocator> Type;

  BugServiceRequest_()
    : data(false)
    , x(0.0)
    , y(0.0)  {
    }
  BugServiceRequest_(const ContainerAllocator& _alloc)
    : data(false)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _data_type;
  _data_type data;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::robot_description::BugServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_description::BugServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BugServiceRequest_

typedef ::robot_description::BugServiceRequest_<std::allocator<void> > BugServiceRequest;

typedef boost::shared_ptr< ::robot_description::BugServiceRequest > BugServiceRequestPtr;
typedef boost::shared_ptr< ::robot_description::BugServiceRequest const> BugServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_description::BugServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_description::BugServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_description::BugServiceRequest_<ContainerAllocator1> & lhs, const ::robot_description::BugServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_description::BugServiceRequest_<ContainerAllocator1> & lhs, const ::robot_description::BugServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_description

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_description::BugServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_description::BugServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_description::BugServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_description::BugServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_description::BugServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_description::BugServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_description::BugServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f8b11bff3fb87f28eaf16d8b97de9457";
  }

  static const char* value(const ::robot_description::BugServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf8b11bff3fb87f28ULL;
  static const uint64_t static_value2 = 0xeaf16d8b97de9457ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_description::BugServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_description/BugServiceRequest";
  }

  static const char* value(const ::robot_description::BugServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_description::BugServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool data\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::robot_description::BugServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_description::BugServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BugServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_description::BugServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_description::BugServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_DESCRIPTION_MESSAGE_BUGSERVICEREQUEST_H
