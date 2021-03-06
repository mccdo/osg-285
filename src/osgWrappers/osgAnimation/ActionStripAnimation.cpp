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
#include <osgAnimation/ActionBlendIn>
#include <osgAnimation/ActionBlendOut>
#include <osgAnimation/ActionStripAnimation>
#include <osgAnimation/ActionVisitor>
#include <osgAnimation/Animation>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgAnimation::ActionStripAnimation)
	I_DeclaringFile("osgAnimation/ActionStripAnimation");
	I_BaseType(osgAnimation::Action);
	I_Method2(, META_Action, IN, osgAnimation, x, IN, osgAnimation::ActionStripAnimation, x,
	          Properties::NON_VIRTUAL,
	          ____META_Action__osgAnimation__ActionStripAnimation,
	          "",
	          "");
	I_Constructor0(____ActionStripAnimation,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::ActionStripAnimation &, a, IN, const osg::CopyOp &, c,
	               ____ActionStripAnimation__C5_ActionStripAnimation_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_ConstructorWithDefaults4(IN, osgAnimation::Animation *, animation, , IN, double, blendInDuration, 0.0, IN, double, blendOutDuration, 0.0, IN, double, blendInWeightTarget, 1.0,
	                           ____ActionStripAnimation__Animation_P1__double__double__double,
	                           "",
	                           "");
	I_Method0(osgAnimation::ActionAnimation *, getAnimation,
	          Properties::NON_VIRTUAL,
	          __ActionAnimation_P1__getAnimation,
	          "",
	          "");
	I_Method0(osgAnimation::ActionBlendIn *, getBlendIn,
	          Properties::NON_VIRTUAL,
	          __ActionBlendIn_P1__getBlendIn,
	          "",
	          "");
	I_Method0(osgAnimation::ActionBlendOut *, getBlendOut,
	          Properties::NON_VIRTUAL,
	          __ActionBlendOut_P1__getBlendOut,
	          "",
	          "");
	I_Method0(const osgAnimation::ActionAnimation *, getAnimation,
	          Properties::NON_VIRTUAL,
	          __C5_ActionAnimation_P1__getAnimation,
	          "",
	          "");
	I_Method0(const osgAnimation::ActionBlendIn *, getBlendIn,
	          Properties::NON_VIRTUAL,
	          __C5_ActionBlendIn_P1__getBlendIn,
	          "",
	          "");
	I_Method0(const osgAnimation::ActionBlendOut *, getBlendOut,
	          Properties::NON_VIRTUAL,
	          __C5_ActionBlendOut_P1__getBlendOut,
	          "",
	          "");
	I_Method0(unsigned int, getBlendOutStartFrame,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getBlendOutStartFrame,
	          "",
	          "");
	I_Method0(unsigned int, getLoop,
	          Properties::VIRTUAL,
	          __unsigned_int__getLoop,
	          "",
	          "");
	I_Method1(void, setLoop, IN, unsigned int, loop,
	          Properties::NON_VIRTUAL,
	          __void__setLoop__unsigned_int,
	          "",
	          "");
	I_Method1(void, traverse, IN, osgAnimation::ActionVisitor &, visitor,
	          Properties::VIRTUAL,
	          __void__traverse__ActionVisitor_R1,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::ActionAnimation *, Animation, 
	                 __ActionAnimation_P1__getAnimation, 
	                 0);
	I_SimpleProperty(osgAnimation::ActionBlendIn *, BlendIn, 
	                 __ActionBlendIn_P1__getBlendIn, 
	                 0);
	I_SimpleProperty(osgAnimation::ActionBlendOut *, BlendOut, 
	                 __ActionBlendOut_P1__getBlendOut, 
	                 0);
	I_SimpleProperty(unsigned int, BlendOutStartFrame, 
	                 __unsigned_int__getBlendOutStartFrame, 
	                 0);
	I_SimpleProperty(unsigned int, Loop, 
	                 __unsigned_int__getLoop, 
	                 __void__setLoop__unsigned_int);
END_REFLECTOR

