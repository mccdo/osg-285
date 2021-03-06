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
#include <osg/Image>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Texture2DMultisample>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::Texture2DMultisample)
	I_DeclaringFile("osg/Texture2DMultisample");
	I_BaseType(osg::Texture);
	I_Constructor0(____Texture2DMultisample,
	               "",
	               "");
	I_Constructor2(IN, GLsizei, numSamples, IN, GLboolean, fixedsamplelocations,
	               ____Texture2DMultisample__GLsizei__GLboolean,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Texture2DMultisample &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Texture2DMultisample__C5_Texture2DMultisample_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
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
	I_Method1(int, compare, IN, const osg::StateAttribute &, rhs,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method0(GLenum, getTextureTarget,
	          Properties::VIRTUAL,
	          __GLenum__getTextureTarget,
	          "",
	          "");
	I_Method2(void, setTextureSize, IN, int, width, IN, int, height,
	          Properties::NON_VIRTUAL,
	          __void__setTextureSize__int__int,
	          "Sets the texture width and height. ",
	          "If width or height are zero, calculate the respective value from the source image size. ");
	I_Method1(void, setNumSamples, IN, int, samples,
	          Properties::NON_VIRTUAL,
	          __void__setNumSamples__int,
	          "",
	          "");
	I_Method2(void, setImage, IN, unsigned, face, IN, osg::Image *, image,
	          Properties::VIRTUAL,
	          __void__setImage__unsigned__Image_P1,
	          "Sets the texture image for the specified face. ",
	          "");
	I_Method1(osg::Image *, getImage, IN, unsigned, face,
	          Properties::VIRTUAL,
	          __Image_P1__getImage__unsigned,
	          "Gets the texture image for the specified face. ",
	          "");
	I_Method1(const osg::Image *, getImage, IN, unsigned, face,
	          Properties::VIRTUAL,
	          __C5_Image_P1__getImage__unsigned,
	          "Gets the const texture image for specified face. ",
	          "");
	I_Method0(unsigned int, getNumImages,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumImages,
	          "Gets the number of images that can be assigned to this Texture. ",
	          "");
	I_Method1(void, allocateMipmap, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__allocateMipmap__State_R1,
	          "Allocate mipmap levels of the texture by subsequent calling of glTexImage* function. ",
	          "");
	I_Method1(void, setTextureWidth, IN, int, width,
	          Properties::NON_VIRTUAL,
	          __void__setTextureWidth__int,
	          "",
	          "");
	I_Method1(void, setTextureHeight, IN, int, height,
	          Properties::NON_VIRTUAL,
	          __void__setTextureHeight__int,
	          "",
	          "");
	I_Method0(int, getTextureWidth,
	          Properties::VIRTUAL,
	          __int__getTextureWidth,
	          "",
	          "");
	I_Method0(int, getTextureHeight,
	          Properties::VIRTUAL,
	          __int__getTextureHeight,
	          "",
	          "");
	I_Method0(int, getTextureDepth,
	          Properties::VIRTUAL,
	          __int__getTextureDepth,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "Bind the texture object. ",
	          "If the texture object hasn't already been compiled, create the texture mipmap levels. ");
	I_ProtectedMethod0(void, computeInternalFormat,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __void__computeInternalFormat,
	                   "",
	                   "");
	I_ArrayProperty(osg::Image *, Image, 
	                __Image_P1__getImage__unsigned, 
	                __void__setImage__unsigned__Image_P1, 
	                __unsigned_int__getNumImages, 
	                0, 
	                0, 
	                0);
	I_SimpleProperty(int, NumSamples, 
	                 0, 
	                 __void__setNumSamples__int);
	I_SimpleProperty(int, TextureDepth, 
	                 __int__getTextureDepth, 
	                 0);
	I_SimpleProperty(int, TextureHeight, 
	                 __int__getTextureHeight, 
	                 __void__setTextureHeight__int);
	I_SimpleProperty(GLenum, TextureTarget, 
	                 __GLenum__getTextureTarget, 
	                 0);
	I_SimpleProperty(int, TextureWidth, 
	                 __int__getTextureWidth, 
	                 __void__setTextureWidth__int);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

