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
#include <osg/Vec3>
#include <osgParticle/Particle>
#include <osgParticle/RadialShooter>
#include <osgParticle/range>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgParticle::RadialShooter)
	I_DeclaringFile("osgParticle/RadialShooter");
	I_BaseType(osgParticle::Shooter);
	I_Constructor0(____RadialShooter,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::RadialShooter &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____RadialShooter__C5_RadialShooter_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(const osgParticle::rangef &, getThetaRange,
	          Properties::NON_VIRTUAL,
	          __C5_rangef_R1__getThetaRange,
	          "Get the range of possible values for theta angle. ",
	          "");
	I_Method1(void, setThetaRange, IN, const osgParticle::rangef &, r,
	          Properties::NON_VIRTUAL,
	          __void__setThetaRange__C5_rangef_R1,
	          "Set the range of possible values for theta angle. ",
	          "");
	I_Method2(void, setThetaRange, IN, float, r1, IN, float, r2,
	          Properties::NON_VIRTUAL,
	          __void__setThetaRange__float__float,
	          "Set the range of possible values for theta angle. ",
	          "");
	I_Method0(const osgParticle::rangef &, getPhiRange,
	          Properties::NON_VIRTUAL,
	          __C5_rangef_R1__getPhiRange,
	          "Get the range of possible values for phi angle. ",
	          "");
	I_Method1(void, setPhiRange, IN, const osgParticle::rangef &, r,
	          Properties::NON_VIRTUAL,
	          __void__setPhiRange__C5_rangef_R1,
	          "Set the range of possible values for phi angle. ",
	          "");
	I_Method2(void, setPhiRange, IN, float, r1, IN, float, r2,
	          Properties::NON_VIRTUAL,
	          __void__setPhiRange__float__float,
	          "Set the range of possible values for phi angle. ",
	          "");
	I_Method0(const osgParticle::rangef &, getInitialSpeedRange,
	          Properties::NON_VIRTUAL,
	          __C5_rangef_R1__getInitialSpeedRange,
	          "Get the range of possible values for initial speed of particles. ",
	          "");
	I_Method1(void, setInitialSpeedRange, IN, const osgParticle::rangef &, r,
	          Properties::NON_VIRTUAL,
	          __void__setInitialSpeedRange__C5_rangef_R1,
	          "Set the range of possible values for initial speed of particles. ",
	          "");
	I_Method2(void, setInitialSpeedRange, IN, float, r1, IN, float, r2,
	          Properties::NON_VIRTUAL,
	          __void__setInitialSpeedRange__float__float,
	          "Set the range of possible values for initial speed of particles. ",
	          "");
	I_Method0(const osgParticle::rangev3 &, getInitialRotationalSpeedRange,
	          Properties::NON_VIRTUAL,
	          __C5_rangev3_R1__getInitialRotationalSpeedRange,
	          "Get the range of possible values for initial rotational speed of particles. ",
	          "");
	I_Method1(void, setInitialRotationalSpeedRange, IN, const osgParticle::rangev3 &, r,
	          Properties::NON_VIRTUAL,
	          __void__setInitialRotationalSpeedRange__C5_rangev3_R1,
	          "Set the range of possible values for initial rotational speed of particles. ",
	          "");
	I_Method2(void, setInitialRotationalSpeedRange, IN, const osg::Vec3 &, r1, IN, const osg::Vec3 &, r2,
	          Properties::NON_VIRTUAL,
	          __void__setInitialRotationalSpeedRange__C5_osg_Vec3_R1__C5_osg_Vec3_R1,
	          "Set the range of possible values for initial rotational speed of particles. ",
	          "");
	I_Method1(void, shoot, IN, osgParticle::Particle *, P,
	          Properties::VIRTUAL,
	          __void__shoot__Particle_P1,
	          "Shoot a particle. Do not call this method manually. ",
	          "");
	I_SimpleProperty(const osgParticle::rangev3 &, InitialRotationalSpeedRange, 
	                 __C5_rangev3_R1__getInitialRotationalSpeedRange, 
	                 __void__setInitialRotationalSpeedRange__C5_rangev3_R1);
	I_SimpleProperty(const osgParticle::rangef &, InitialSpeedRange, 
	                 __C5_rangef_R1__getInitialSpeedRange, 
	                 __void__setInitialSpeedRange__C5_rangef_R1);
	I_SimpleProperty(const osgParticle::rangef &, PhiRange, 
	                 __C5_rangef_R1__getPhiRange, 
	                 __void__setPhiRange__C5_rangef_R1);
	I_SimpleProperty(const osgParticle::rangef &, ThetaRange, 
	                 __C5_rangef_R1__getThetaRange, 
	                 __void__setThetaRange__C5_rangef_R1);
END_REFLECTOR

