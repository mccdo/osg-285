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

#include <osg/Stats>
#include <osgAnimation/Action>
#include <osgAnimation/ActionAnimation>
#include <osgAnimation/ActionBlendIn>
#include <osgAnimation/ActionBlendOut>
#include <osgAnimation/ActionStripAnimation>
#include <osgAnimation/StatsVisitor>
#include <osgAnimation/Timeline>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgAnimation::StatsActionVisitor)
	I_DeclaringFile("osgAnimation/StatsVisitor");
	I_BaseType(osgAnimation::UpdateActionVisitor);
	I_Method2(, META_ActionVisitor, IN, osgAnimation, x, IN, osgAnimation::StatsActionVisitor, x,
	          Properties::NON_VIRTUAL,
	          ____META_ActionVisitor__osgAnimation__StatsActionVisitor,
	          "",
	          "");
	I_Constructor0(____StatsActionVisitor,
	               "",
	               "");
	I_Constructor2(IN, osg::Stats *, stats, IN, unsigned int, frame,
	               ____StatsActionVisitor__osg_Stats_P1__unsigned_int,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(const std::vector< std::string > &, getChannels,
	          Properties::NON_VIRTUAL,
	          __C5_std_vectorT1_std_string__R1__getChannels,
	          "",
	          "");
	I_Method0(osg::Stats *, getStats,
	          Properties::NON_VIRTUAL,
	          __osg_Stats_P1__getStats,
	          "",
	          "");
	I_Method1(void, setStats, IN, osg::Stats *, stats,
	          Properties::NON_VIRTUAL,
	          __void__setStats__osg_Stats_P1,
	          "",
	          "");
	I_Method1(void, setFrame, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __void__setFrame__unsigned_int,
	          "",
	          "");
	I_Method1(void, apply, IN, osgAnimation::Timeline &, action,
	          Properties::VIRTUAL,
	          __void__apply__Timeline_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osgAnimation::Action &, action,
	          Properties::VIRTUAL,
	          __void__apply__Action_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osgAnimation::ActionBlendIn &, action,
	          Properties::VIRTUAL,
	          __void__apply__ActionBlendIn_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osgAnimation::ActionBlendOut &, action,
	          Properties::VIRTUAL,
	          __void__apply__ActionBlendOut_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osgAnimation::ActionAnimation &, action,
	          Properties::VIRTUAL,
	          __void__apply__ActionAnimation_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osgAnimation::ActionStripAnimation &, action,
	          Properties::VIRTUAL,
	          __void__apply__ActionStripAnimation_R1,
	          "",
	          "");
	I_SimpleProperty(const std::vector< std::string > &, Channels, 
	                 __C5_std_vectorT1_std_string__R1__getChannels, 
	                 0);
	I_SimpleProperty(unsigned int, Frame, 
	                 0, 
	                 __void__setFrame__unsigned_int);
	I_SimpleProperty(osg::Stats *, Stats, 
	                 __osg_Stats_P1__getStats, 
	                 __void__setStats__osg_Stats_P1);
END_REFLECTOR

