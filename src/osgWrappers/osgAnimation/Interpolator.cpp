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
#include <osgAnimation/CubicBezier>
#include <osgAnimation/Interpolator>
#include <osgAnimation/Vec3Packed>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(osgAnimation::TemplateStepInterpolator< double COMMA  double >, osgAnimation::DoubleStepInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateStepInterpolator< float COMMA  float >, osgAnimation::FloatStepInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateStepInterpolator< osg::Vec2 COMMA  osg::Vec2 >, osgAnimation::Vec2StepInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateStepInterpolator< osg::Vec3 COMMA  osg::Vec3 >, osgAnimation::Vec3StepInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateStepInterpolator< osg::Vec3 COMMA  osgAnimation::Vec3Packed >, osgAnimation::Vec3PackedStepInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateStepInterpolator< osg::Vec4 COMMA  osg::Vec4 >, osgAnimation::Vec4StepInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateStepInterpolator< osg::Quat COMMA  osg::Quat >, osgAnimation::QuatStepInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateLinearInterpolator< double COMMA  double >, osgAnimation::DoubleLinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateLinearInterpolator< float COMMA  float >, osgAnimation::FloatLinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateLinearInterpolator< osg::Vec2 COMMA  osg::Vec2 >, osgAnimation::Vec2LinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateLinearInterpolator< osg::Vec3 COMMA  osg::Vec3 >, osgAnimation::Vec3LinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateLinearInterpolator< osg::Vec3 COMMA  osgAnimation::Vec3Packed >, osgAnimation::Vec3PackedLinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateLinearInterpolator< osg::Vec4 COMMA  osg::Vec4 >, osgAnimation::Vec4LinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateSphericalLinearInterpolator< osg::Quat COMMA  osg::Quat >, osgAnimation::QuatSphericalLinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateLinearInterpolator< osg::Matrixf COMMA  osg::Matrixf >, osgAnimation::MatrixLinearInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateCubicBezierInterpolator< float COMMA  osgAnimation::FloatCubicBezier >, osgAnimation::FloatCubicBezierInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateCubicBezierInterpolator< double COMMA  osgAnimation::DoubleCubicBezier >, osgAnimation::DoubleCubicBezierInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateCubicBezierInterpolator< osg::Vec2 COMMA  osgAnimation::Vec2CubicBezier >, osgAnimation::Vec2CubicBezierInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateCubicBezierInterpolator< osg::Vec3 COMMA  osgAnimation::Vec3CubicBezier >, osgAnimation::Vec3CubicBezierInterpolator)

TYPE_NAME_ALIAS(osgAnimation::TemplateCubicBezierInterpolator< osg::Vec4 COMMA  osgAnimation::Vec4CubicBezier >, osgAnimation::Vec4CubicBezierInterpolator)

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateCubicBezierInterpolator< double COMMA  osgAnimation::DoubleCubicBezier >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateCubicBezierInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osgAnimation::DoubleCubicBezier > &, keyframes, IN, float, time, IN, double &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateCubicBezierInterpolator< float COMMA  osgAnimation::FloatCubicBezier >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateCubicBezierInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osgAnimation::FloatCubicBezier > &, keyframes, IN, float, time, IN, float &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateCubicBezierInterpolator< osg::Vec2 COMMA  osgAnimation::Vec2CubicBezier >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateCubicBezierInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osgAnimation::Vec2CubicBezier > &, keyframes, IN, float, time, IN, osg::Vec2 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateCubicBezierInterpolator< osg::Vec3 COMMA  osgAnimation::Vec3CubicBezier >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateCubicBezierInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osgAnimation::Vec3CubicBezier > &, keyframes, IN, float, time, IN, osg::Vec3 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateCubicBezierInterpolator< osg::Vec4 COMMA  osgAnimation::Vec4CubicBezier >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateCubicBezierInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osgAnimation::Vec4CubicBezier > &, keyframes, IN, float, time, IN, osg::Vec4 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateLinearInterpolator< double COMMA  double >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< double > &, keyframes, IN, float, time, IN, double &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateLinearInterpolator< float COMMA  float >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< float > &, keyframes, IN, float, time, IN, float &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateLinearInterpolator< osg::Matrixf COMMA  osg::Matrixf >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Matrixf > &, keyframes, IN, float, time, IN, osg::Matrixf &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateLinearInterpolator< osg::Vec2 COMMA  osg::Vec2 >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Vec2 > &, keyframes, IN, float, time, IN, osg::Vec2 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateLinearInterpolator< osg::Vec3 COMMA  osg::Vec3 >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Vec3 > &, keyframes, IN, float, time, IN, osg::Vec3 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateLinearInterpolator< osg::Vec3 COMMA  osgAnimation::Vec3Packed >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osgAnimation::Vec3Packed > &, keyframes, IN, float, time, IN, osg::Vec3 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateLinearInterpolator< osg::Vec4 COMMA  osg::Vec4 >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Vec4 > &, keyframes, IN, float, time, IN, osg::Vec4 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSphericalLinearInterpolator< osg::Quat COMMA  osg::Quat >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateSphericalLinearInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Quat > &, keyframes, IN, float, time, IN, osg::Quat &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateStepInterpolator< double COMMA  double >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateStepInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< double > &, keyframes, IN, float, time, IN, double &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateStepInterpolator< float COMMA  float >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateStepInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< float > &, keyframes, IN, float, time, IN, float &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateStepInterpolator< osg::Quat COMMA  osg::Quat >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateStepInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Quat > &, keyframes, IN, float, time, IN, osg::Quat &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateStepInterpolator< osg::Vec2 COMMA  osg::Vec2 >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateStepInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Vec2 > &, keyframes, IN, float, time, IN, osg::Vec2 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateStepInterpolator< osg::Vec3 COMMA  osg::Vec3 >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateStepInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Vec3 > &, keyframes, IN, float, time, IN, osg::Vec3 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateStepInterpolator< osg::Vec3 COMMA  osgAnimation::Vec3Packed >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateStepInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osgAnimation::Vec3Packed > &, keyframes, IN, float, time, IN, osg::Vec3 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateStepInterpolator< osg::Vec4 COMMA  osg::Vec4 >)
	I_DeclaringFile("osgAnimation/Interpolator");
	I_BaseType(osgAnimation::TemplateInterpolatorBase);
	I_Constructor0(____TemplateStepInterpolator,
	               "",
	               "");
	I_Method3(void, getValue, IN, const osgAnimation::TemplateKeyframeContainer< osg::Vec4 > &, keyframes, IN, float, time, IN, osg::Vec4 &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValue__C5_TemplateKeyframeContainerT1_KEY__R1__float__TYPE_R1,
	          "",
	          "");
END_REFLECTOR

