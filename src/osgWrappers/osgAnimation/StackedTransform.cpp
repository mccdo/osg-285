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
#include <osg/Matrix>
#include <osgAnimation/StackedTransform>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgAnimation::StackedTransform)
	I_DeclaringFile("osgAnimation/StackedTransform");
	I_BaseType(osg::MixinVector);
	I_Constructor0(____StackedTransform,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgAnimation::StackedTransform &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____StackedTransform__C5_StackedTransform_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(void, update,
	          Properties::NON_VIRTUAL,
	          __void__update,
	          "",
	          "");
	I_Method0(const osg::Matrix &, getMatrix,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Matrix_R1__getMatrix,
	          "",
	          "");
	I_SimpleProperty(const osg::Matrix &, Matrix, 
	                 __C5_osg_Matrix_R1__getMatrix, 
	                 0);
END_REFLECTOR

