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

#include <osg/Matrixf>
#include <osg/Quat>
#include <osg/Vec2>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgAnimation/Target>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgAnimation::Target)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Target,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(int, getCount,
	          Properties::NON_VIRTUAL,
	          __int__getCount,
	          "",
	          "");
	I_Method0(float, getWeight,
	          Properties::NON_VIRTUAL,
	          __float__getWeight,
	          "",
	          "");
	I_SimpleProperty(int, Count, 
	                 __int__getCount, 
	                 0);
	I_SimpleProperty(float, Weight, 
	                 __float__getWeight, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Matrixf >, osgAnimation::MatrixTarget)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Quat >, osgAnimation::QuatTarget)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Vec3 >, osgAnimation::Vec3Target)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Vec4 >, osgAnimation::Vec4Target)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Vec2 >, osgAnimation::Vec2Target)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< float >, osgAnimation::FloatTarget)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< double >, osgAnimation::DoubleTarget)

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateTarget< double >)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osgAnimation::Target);
	I_Constructor0(____TemplateTarget,
	               "",
	               "");
	I_Constructor1(IN, const double &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_T_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::TemplateTarget< double > &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_TemplateTarget_R1,
	               "",
	               "");
	I_Method3(void, lerp, IN, float, t, IN, const double &, a, IN, const double &, b,
	          Properties::NON_VIRTUAL,
	          __void__lerp__float__C5_T_R1__C5_T_R1,
	          "",
	          "");
	I_Method3(void, update, IN, float, weight, IN, const double &, val, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__update__float__C5_T_R1__int,
	          "The priority is used to detect a change of priority It's important to update animation target in priority order. ",
	          "eg: all animation with priority 1 all animation with priority 0 all animation with priority -1 ... ");
	I_Method0(const double &, getValue,
	          Properties::NON_VIRTUAL,
	          __C5_T_R1__getValue,
	          "",
	          "");
	I_Method1(void, setValue, IN, const double &, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__C5_T_R1,
	          "",
	          "");
	I_SimpleProperty(const double &, Value, 
	                 __C5_T_R1__getValue, 
	                 __void__setValue__C5_T_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateTarget< float >)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osgAnimation::Target);
	I_Constructor0(____TemplateTarget,
	               "",
	               "");
	I_Constructor1(IN, const float &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_T_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::TemplateTarget< float > &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_TemplateTarget_R1,
	               "",
	               "");
	I_Method3(void, lerp, IN, float, t, IN, const float &, a, IN, const float &, b,
	          Properties::NON_VIRTUAL,
	          __void__lerp__float__C5_T_R1__C5_T_R1,
	          "",
	          "");
	I_Method3(void, update, IN, float, weight, IN, const float &, val, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__update__float__C5_T_R1__int,
	          "The priority is used to detect a change of priority It's important to update animation target in priority order. ",
	          "eg: all animation with priority 1 all animation with priority 0 all animation with priority -1 ... ");
	I_Method0(const float &, getValue,
	          Properties::NON_VIRTUAL,
	          __C5_T_R1__getValue,
	          "",
	          "");
	I_Method1(void, setValue, IN, const float &, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__C5_T_R1,
	          "",
	          "");
	I_SimpleProperty(const float &, Value, 
	                 __C5_T_R1__getValue, 
	                 __void__setValue__C5_T_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateTarget< osg::Matrixf >)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osgAnimation::Target);
	I_Constructor0(____TemplateTarget,
	               "",
	               "");
	I_Constructor1(IN, const osg::Matrixf &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_T_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::TemplateTarget< osg::Matrixf > &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_TemplateTarget_R1,
	               "",
	               "");
	I_Method3(void, lerp, IN, float, t, IN, const osg::Matrixf &, a, IN, const osg::Matrixf &, b,
	          Properties::NON_VIRTUAL,
	          __void__lerp__float__C5_T_R1__C5_T_R1,
	          "",
	          "");
	I_Method3(void, update, IN, float, weight, IN, const osg::Matrixf &, val, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__update__float__C5_T_R1__int,
	          "The priority is used to detect a change of priority It's important to update animation target in priority order. ",
	          "eg: all animation with priority 1 all animation with priority 0 all animation with priority -1 ... ");
	I_Method0(const osg::Matrixf &, getValue,
	          Properties::NON_VIRTUAL,
	          __C5_T_R1__getValue,
	          "",
	          "");
	I_Method1(void, setValue, IN, const osg::Matrixf &, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__C5_T_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Matrixf &, Value, 
	                 __C5_T_R1__getValue, 
	                 __void__setValue__C5_T_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateTarget< osg::Quat >)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osgAnimation::Target);
	I_Constructor0(____TemplateTarget,
	               "",
	               "");
	I_Constructor1(IN, const osg::Quat &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_T_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::TemplateTarget< osg::Quat > &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_TemplateTarget_R1,
	               "",
	               "");
	I_Method3(void, lerp, IN, float, t, IN, const osg::Quat &, a, IN, const osg::Quat &, b,
	          Properties::NON_VIRTUAL,
	          __void__lerp__float__C5_T_R1__C5_T_R1,
	          "",
	          "");
	I_Method3(void, update, IN, float, weight, IN, const osg::Quat &, val, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__update__float__C5_T_R1__int,
	          "The priority is used to detect a change of priority It's important to update animation target in priority order. ",
	          "eg: all animation with priority 1 all animation with priority 0 all animation with priority -1 ... ");
	I_Method0(const osg::Quat &, getValue,
	          Properties::NON_VIRTUAL,
	          __C5_T_R1__getValue,
	          "",
	          "");
	I_Method1(void, setValue, IN, const osg::Quat &, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__C5_T_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Quat &, Value, 
	                 __C5_T_R1__getValue, 
	                 __void__setValue__C5_T_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateTarget< osg::Vec2 >)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osgAnimation::Target);
	I_Constructor0(____TemplateTarget,
	               "",
	               "");
	I_Constructor1(IN, const osg::Vec2 &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_T_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::TemplateTarget< osg::Vec2 > &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_TemplateTarget_R1,
	               "",
	               "");
	I_Method3(void, lerp, IN, float, t, IN, const osg::Vec2 &, a, IN, const osg::Vec2 &, b,
	          Properties::NON_VIRTUAL,
	          __void__lerp__float__C5_T_R1__C5_T_R1,
	          "",
	          "");
	I_Method3(void, update, IN, float, weight, IN, const osg::Vec2 &, val, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__update__float__C5_T_R1__int,
	          "The priority is used to detect a change of priority It's important to update animation target in priority order. ",
	          "eg: all animation with priority 1 all animation with priority 0 all animation with priority -1 ... ");
	I_Method0(const osg::Vec2 &, getValue,
	          Properties::NON_VIRTUAL,
	          __C5_T_R1__getValue,
	          "",
	          "");
	I_Method1(void, setValue, IN, const osg::Vec2 &, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__C5_T_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec2 &, Value, 
	                 __C5_T_R1__getValue, 
	                 __void__setValue__C5_T_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateTarget< osg::Vec3 >)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osgAnimation::Target);
	I_Constructor0(____TemplateTarget,
	               "",
	               "");
	I_Constructor1(IN, const osg::Vec3 &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_T_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::TemplateTarget< osg::Vec3 > &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_TemplateTarget_R1,
	               "",
	               "");
	I_Method3(void, lerp, IN, float, t, IN, const osg::Vec3 &, a, IN, const osg::Vec3 &, b,
	          Properties::NON_VIRTUAL,
	          __void__lerp__float__C5_T_R1__C5_T_R1,
	          "",
	          "");
	I_Method3(void, update, IN, float, weight, IN, const osg::Vec3 &, val, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__update__float__C5_T_R1__int,
	          "The priority is used to detect a change of priority It's important to update animation target in priority order. ",
	          "eg: all animation with priority 1 all animation with priority 0 all animation with priority -1 ... ");
	I_Method0(const osg::Vec3 &, getValue,
	          Properties::NON_VIRTUAL,
	          __C5_T_R1__getValue,
	          "",
	          "");
	I_Method1(void, setValue, IN, const osg::Vec3 &, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__C5_T_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec3 &, Value, 
	                 __C5_T_R1__getValue, 
	                 __void__setValue__C5_T_R1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateTarget< osg::Vec4 >)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osgAnimation::Target);
	I_Constructor0(____TemplateTarget,
	               "",
	               "");
	I_Constructor1(IN, const osg::Vec4 &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_T_R1,
	               "",
	               "");
	I_Constructor1(IN, const osgAnimation::TemplateTarget< osg::Vec4 > &, v,
	               Properties::NON_EXPLICIT,
	               ____TemplateTarget__C5_TemplateTarget_R1,
	               "",
	               "");
	I_Method3(void, lerp, IN, float, t, IN, const osg::Vec4 &, a, IN, const osg::Vec4 &, b,
	          Properties::NON_VIRTUAL,
	          __void__lerp__float__C5_T_R1__C5_T_R1,
	          "",
	          "");
	I_Method3(void, update, IN, float, weight, IN, const osg::Vec4 &, val, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__update__float__C5_T_R1__int,
	          "The priority is used to detect a change of priority It's important to update animation target in priority order. ",
	          "eg: all animation with priority 1 all animation with priority 0 all animation with priority -1 ... ");
	I_Method0(const osg::Vec4 &, getValue,
	          Properties::NON_VIRTUAL,
	          __C5_T_R1__getValue,
	          "",
	          "");
	I_Method1(void, setValue, IN, const osg::Vec4 &, value,
	          Properties::NON_VIRTUAL,
	          __void__setValue__C5_T_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec4 &, Value, 
	                 __C5_T_R1__getValue, 
	                 __void__setValue__C5_T_R1);
END_REFLECTOR

