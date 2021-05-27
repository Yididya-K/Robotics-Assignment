// Generated by gencpp from file transformation/Output.msg
// DO NOT EDIT!


#ifndef TRANSFORMATION_MESSAGE_OUTPUT_H
#define TRANSFORMATION_MESSAGE_OUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace transformation
{
template <class ContainerAllocator>
struct Output_
{
  typedef Output_<ContainerAllocator> Type;

  Output_()
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  Output_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::transformation::Output_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::transformation::Output_<ContainerAllocator> const> ConstPtr;

}; // struct Output_

typedef ::transformation::Output_<std::allocator<void> > Output;

typedef boost::shared_ptr< ::transformation::Output > OutputPtr;
typedef boost::shared_ptr< ::transformation::Output const> OutputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::transformation::Output_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::transformation::Output_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::transformation::Output_<ContainerAllocator1> & lhs, const ::transformation::Output_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::transformation::Output_<ContainerAllocator1> & lhs, const ::transformation::Output_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace transformation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::transformation::Output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::transformation::Output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transformation::Output_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::transformation::Output_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transformation::Output_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::transformation::Output_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::transformation::Output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a842b65f413084dc2b10fb484ea7f17";
  }

  static const char* value(const ::transformation::Output_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a842b65f413084dULL;
  static const uint64_t static_value2 = 0xc2b10fb484ea7f17ULL;
};

template<class ContainerAllocator>
struct DataType< ::transformation::Output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "transformation/Output";
  }

  static const char* value(const ::transformation::Output_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::transformation::Output_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::transformation::Output_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::transformation::Output_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Output_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::transformation::Output_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::transformation::Output_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRANSFORMATION_MESSAGE_OUTPUT_H
