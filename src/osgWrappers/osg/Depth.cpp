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
#include <osg/Depth>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::Depth::Function)
	I_DeclaringFile("osg/Depth");
	I_EnumLabel(osg::Depth::NEVER);
	I_EnumLabel(osg::Depth::LESS);
	I_EnumLabel(osg::Depth::EQUAL);
	I_EnumLabel(osg::Depth::LEQUAL);
	I_EnumLabel(osg::Depth::GREATER);
	I_EnumLabel(osg::Depth::NOTEQUAL);
	I_EnumLabel(osg::Depth::GEQUAL);
	I_EnumLabel(osg::Depth::ALWAYS);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Depth)
	I_DeclaringFile("osg/Depth");
	I_BaseType(osg::StateAttribute);
	I_ConstructorWithDefaults4(IN, osg::Depth::Function, func, osg::Depth::LESS, IN, double, zNear, 0.0, IN, double, zFar, 1.0, IN, bool, writeMask, true,
	                           ____Depth__Function__double__double__bool,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, const osg::Depth &, dp, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Depth__C5_Depth_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, sa,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method1(bool, getModeUsage, IN, osg::StateAttribute::ModeUsage &, usage,
	          Properties::VIRTUAL,
	          __bool__getModeUsage__StateAttribute_ModeUsage_R1,
	          "Return the modes associated with this StateAttribute. ",
	          "");
	I_Method1(void, setFunction, IN, osg::Depth::Function, func,
	          Properties::NON_VIRTUAL,
	          __void__setFunction__Function,
	          "",
	          "");
	I_Method0(osg::Depth::Function, getFunction,
	          Properties::NON_VIRTUAL,
	          __Function__getFunction,
	          "",
	          "");
	I_Method2(void, setRange, IN, double, zNear, IN, double, zFar,
	          Properties::NON_VIRTUAL,
	          __void__setRange__double__double,
	          "",
	          "");
	I_Method1(void, setZNear, IN, double, zNear,
	          Properties::NON_VIRTUAL,
	          __void__setZNear__double,
	          "",
	          "");
	I_Method0(double, getZNear,
	          Properties::NON_VIRTUAL,
	          __double__getZNear,
	          "",
	          "");
	I_Method1(void, setZFar, IN, double, zFar,
	          Properties::NON_VIRTUAL,
	          __void__setZFar__double,
	          "",
	          "");
	I_Method0(double, getZFar,
	          Properties::NON_VIRTUAL,
	          __double__getZFar,
	          "",
	          "");
	I_Method1(void, setWriteMask, IN, bool, mask,
	          Properties::NON_VIRTUAL,
	          __void__setWriteMask__bool,
	          "",
	          "");
	I_Method0(bool, getWriteMask,
	          Properties::NON_VIRTUAL,
	          __bool__getWriteMask,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "apply the OpenGL state attributes. ",
	          "The render info for the current OpenGL context is passed in to allow the StateAttribute to obtain details on the the current context and state. ");
	I_SimpleProperty(osg::Depth::Function, Function, 
	                 __Function__getFunction, 
	                 __void__setFunction__Function);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
	I_SimpleProperty(bool, WriteMask, 
	                 __bool__getWriteMask, 
	                 __void__setWriteMask__bool);
	I_SimpleProperty(double, ZFar, 
	                 __double__getZFar, 
	                 __void__setZFar__double);
	I_SimpleProperty(double, ZNear, 
	                 __double__getZNear, 
	                 __void__setZNear__double);
END_REFLECTOR

