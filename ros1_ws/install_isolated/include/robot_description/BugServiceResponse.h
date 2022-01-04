// Generated by gencpp from file robot_description/BugServiceResponse.msg
// DO NOT EDIT!


#ifndef ROBOT_DESCRIPTION_MESSAGE_BUGSERVICERESPONSE_H
#define ROBOT_DESCRIPTION_MESSAGE_BUGSERVICERESPONSE_H


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
struct BugServiceResponse_
{
  typedef BugServiceResponse_<ContainerAllocator> Type;

  BugServiceResponse_()
    : data(false)  {
    }
  BugServiceResponse_(const ContainerAllocator& _alloc)
    : data(false)  {
  (void)_alloc;
    }



   typedef uint8_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::robot_description::BugServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_description::BugServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct BugServiceResponse_

typedef ::robot_description::BugServiceResponse_<std::allocator<void> > BugServiceResponse;

typedef boost::shared_ptr< ::robot_description::BugServiceResponse > BugServiceResponsePtr;
typedef boost::shared_ptr< ::robot_description::BugServiceResponse const> BugServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_description::BugServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_description::BugServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_description::BugServiceResponse_<ContainerAllocator1> & lhs, const ::robot_description::BugServiceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_description::BugServiceResponse_<ContainerAllocator1> & lhs, const ::robot_description::BugServiceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_description

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robot_description::BugServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_description::BugServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_description::BugServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_description::BugServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_description::BugServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_description::BugServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_description::BugServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b94c1b53db61fb6aed406028ad6332a";
  }

  static const char* value(const ::robot_description::BugServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b94c1b53db61fb6ULL;
  static const uint64_t static_value2 = 0xaed406028ad6332aULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_description::BugServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_description/BugServiceResponse";
  }

  static const char* value(const ::robot_description::BugServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_description::BugServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool data\n"
;
  }

  static const char* value(const ::robot_description::BugServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_description::BugServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BugServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_description::BugServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_description::BugServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_DESCRIPTION_MESSAGE_BUGSERVICERESPONSE_H