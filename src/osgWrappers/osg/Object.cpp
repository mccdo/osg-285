// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/Referenced>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::Object::DataVariance)
	I_DeclaringFile("osg/Object");
	I_EnumLabel(osg::Object::DYNAMIC);
	I_EnumLabel(osg::Object::STATIC);
	I_EnumLabel(osg::Object::UNSPECIFIED);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Object)
	I_DeclaringFile("osg/Object");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Object,
	               "Construct an object. ",
	               "Note Object is a pure virtual base class and therefore cannot be constructed on its own, only derived classes which override the clone and className methods are concrete classes and can be constructed. ");
	I_Constructor1(IN, bool, threadSafeRefUnref,
	               Properties::EXPLICIT,
	               ____Object__bool,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Object &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Object__C5_Object_R1__C5_CopyOp_R1,
	                           "Copy constructor, optional CopyOp object can be used to control shallow vs deep copying of dynamic data. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::PURE_VIRTUAL,
	          __Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::PURE_VIRTUAL,
	          __Object_P1__clone__C5_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, x,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::PURE_VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::PURE_VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setName, IN, const std::string &, name,
	          Properties::VIRTUAL,
	          __void__setName__C5_std_string_R1,
	          "Set the name of object using C++ style string. ",
	          "");
	I_Method1(void, setName, IN, const char *, name,
	          Properties::NON_VIRTUAL,
	          __void__setName__C5_char_P1,
	          "Set the name of object using a C style string. ",
	          "");
	I_Method0(const std::string &, getName,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getName,
	          "Get the name of object. ",
	          "");
	I_Method1(void, setDataVariance, IN, osg::Object::DataVariance, dv,
	          Properties::NON_VIRTUAL,
	          __void__setDataVariance__DataVariance,
	          "Set the data variance of this object. ",
	          "Can be set to either STATIC for values that do not change over the lifetime of the object, or DYNAMIC for values that vary over the lifetime of the object. The DataVariance value can be used by routines such as optimization codes that wish to share static data. UNSPECIFIED is used to specify that the DataVariance hasn't been set yet. ");
	I_Method0(osg::Object::DataVariance, getDataVariance,
	          Properties::NON_VIRTUAL,
	          __DataVariance__getDataVariance,
	          "Get the data variance of this object. ",
	          "");
	I_Method0(void, computeDataVariance,
	          Properties::VIRTUAL,
	          __void__computeDataVariance,
	          "Compute the DataVariance based on an assessment of callback etc. ",
	          "");
	I_Method1(void, setUserData, IN, osg::Referenced *, obj,
	          Properties::NON_VIRTUAL,
	          __void__setUserData__Referenced_P1,
	          "Set user data, data must be subclassed from Referenced to allow automatic memory handling. ",
	          "If your own data isn't directly subclassed from Referenced then create an adapter object which points to your own object and handles the memory addressing. ");
	I_Method0(osg::Referenced *, getUserData,
	          Properties::NON_VIRTUAL,
	          __Referenced_P1__getUserData,
	          "Get user data. ",
	          "");
	I_Method0(const osg::Referenced *, getUserData,
	          Properties::NON_VIRTUAL,
	          __C5_Referenced_P1__getUserData,
	          "Get const user data. ",
	          "");
	I_Method1(void, resizeGLObjectBuffers, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __void__resizeGLObjectBuffers__unsigned,
	          "Resize any per context GLObject buffers to specified size. ",
	          "");
	I_MethodWithDefaults1(void, releaseGLObjects, IN, osg::State *, x, 0,
	                      Properties::VIRTUAL,
	                      __void__releaseGLObjects__osg_State_P1,
	                      "If State is non-zero, this function releases any associated OpenGL objects for the specified graphics context. ",
	                      "Otherwise, releases OpenGL objects for all graphics contexts. ");
	I_SimpleProperty(osg::Object::DataVariance, DataVariance, 
	                 __DataVariance__getDataVariance, 
	                 __void__setDataVariance__DataVariance);
	I_SimpleProperty(const std::string &, Name, 
	                 __C5_std_string_R1__getName, 
	                 __void__setName__C5_std_string_R1);
	I_SimpleProperty(osg::Referenced *, UserData, 
	                 __Referenced_P1__getUserData, 
	                 __void__setUserData__Referenced_P1);
END_REFLECTOR

