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
#include <osgAnimation/Action>
#include <osgAnimation/ActionAnimation>
#include <osgAnimation/Animation>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgAnimation::ActionAnimation)
	I_DeclaringFile("osgAnimation/ActionAnimation");
	I_BaseType(osgAnimation::Action);
	I_Method2(, META_Action, IN, osgAnimation, x, IN, osgAnimation::ActionAnimation, x,
	          Properties::NON_VIRTUAL,
	          ____META_Action__osgAnimation__ActionAnimation,
	          "",
	          "");
	I_Constructor0(____ActionAnimation,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::ActionAnimation &, a, IN, const osg::CopyOp &, c,
	               ____ActionAnimation__C5_ActionAnimation_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Constructor1(IN, osgAnimation::Animation *, animation,
	               Properties::NON_EXPLICIT,
	               ____ActionAnimation__Animation_P1,
	               "",
	               "");
	I_Method2(void, updateAnimation, IN, unsigned int, frame, IN, int, priority,
	          Properties::NON_VIRTUAL,
	          __void__updateAnimation__unsigned_int__int,
	          "",
	          "");
	I_Method0(osgAnimation::Animation *, getAnimation,
	          Properties::NON_VIRTUAL,
	          __Animation_P1__getAnimation,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Animation *, Animation, 
	                 __Animation_P1__getAnimation, 
	                 0);
END_REFLECTOR

