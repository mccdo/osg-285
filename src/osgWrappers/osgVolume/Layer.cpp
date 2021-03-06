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

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Image>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Texture>
#include <osg/Vec4>
#include <osgVolume/Layer>
#include <osgVolume/Locator>
#include <osgVolume/Property>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgVolume::CompositeLayer)
	I_DeclaringFile("osgVolume/Layer");
	I_BaseType(osgVolume::Layer);
	I_Constructor0(____CompositeLayer,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgVolume::CompositeLayer &, compositeLayer, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____CompositeLayer__C5_CompositeLayer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
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
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "",
	          "");
	I_Method2(void, setFileName, IN, unsigned int, i, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __void__setFileName__unsigned_int__C5_std_string_R1,
	          "",
	          "");
	I_Method1(const std::string &, getFileName, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getFileName__unsigned_int,
	          "",
	          "");
	I_Method2(void, setLayer, IN, unsigned int, i, IN, osgVolume::Layer *, layer,
	          Properties::NON_VIRTUAL,
	          __void__setLayer__unsigned_int__Layer_P1,
	          "",
	          "");
	I_Method1(osgVolume::Layer *, getLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __Layer_P1__getLayer__unsigned_int,
	          "",
	          "");
	I_Method1(const osgVolume::Layer *, getLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __C5_Layer_P1__getLayer__unsigned_int,
	          "",
	          "");
	I_Method1(void, addLayer, IN, osgVolume::Layer *, layer,
	          Properties::NON_VIRTUAL,
	          __void__addLayer__Layer_P1,
	          "",
	          "");
	I_Method1(void, removeLayer, IN, unsigned int, i,
	          Properties::NON_VIRTUAL,
	          __void__removeLayer__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumLayers,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumLayers,
	          "",
	          "");
	I_Method0(bool, requiresUpdateTraversal,
	          Properties::VIRTUAL,
	          __bool__requiresUpdateTraversal,
	          "Specify whether ImageLayer requires update traversal. ",
	          "");
	I_Method1(void, update, IN, osg::NodeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__update__osg_NodeVisitor_R1,
	          "Call update on the Layer. ",
	          "");
	I_IndexedProperty(const std::string &, FileName, 
	                  __C5_std_string_R1__getFileName__unsigned_int, 
	                  __void__setFileName__unsigned_int__C5_std_string_R1, 
	                  0);
	I_ArrayProperty(osgVolume::Layer *, Layer, 
	                __Layer_P1__getLayer__unsigned_int, 
	                __void__setLayer__unsigned_int__Layer_P1, 
	                __unsigned_int__getNumLayers, 
	                __void__addLayer__Layer_P1, 
	                0, 
	                __void__removeLayer__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgVolume::ImageLayer)
	I_DeclaringFile("osgVolume/Layer");
	I_BaseType(osgVolume::Layer);
	I_ConstructorWithDefaults1(IN, osg::Image *, image, 0,
	                           Properties::NON_EXPLICIT,
	                           ____ImageLayer__osg_Image_P1,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, const osgVolume::ImageLayer &, imageLayer, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____ImageLayer__C5_ImageLayer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
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
	I_Method1(void, setFileName, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __void__setFileName__C5_std_string_R1,
	          "Set the file name of the data associated with this layer. ",
	          "");
	I_Method0(const std::string &, getFileName,
	          Properties::VIRTUAL,
	          __C5_std_string_R1__getFileName,
	          "Get the file name of the layer. ",
	          "");
	I_Method1(void, setImage, IN, osg::Image *, image,
	          Properties::NON_VIRTUAL,
	          __void__setImage__osg_Image_P1,
	          "",
	          "");
	I_Method0(osg::Image *, getImage,
	          Properties::VIRTUAL,
	          __osg_Image_P1__getImage,
	          "Return image associated with layer. ",
	          "");
	I_Method0(const osg::Image *, getImage,
	          Properties::VIRTUAL,
	          __C5_osg_Image_P1__getImage,
	          "Return const image associated with layer. ",
	          "");
	I_Method2(bool, computeMinMax, IN, osg::Vec4 &, min, IN, osg::Vec4 &, max,
	          Properties::NON_VIRTUAL,
	          __bool__computeMinMax__osg_Vec4_R1__osg_Vec4_R1,
	          "Compute the min and max pixel colors. ",
	          "");
	I_Method2(void, offsetAndScaleImage, IN, const osg::Vec4 &, offset, IN, const osg::Vec4 &, scale,
	          Properties::NON_VIRTUAL,
	          __void__offsetAndScaleImage__C5_osg_Vec4_R1__C5_osg_Vec4_R1,
	          "Apply color transformation to pixels using c' = offset + c * scale . ",
	          "");
	I_Method0(void, rescaleToZeroToOneRange,
	          Properties::NON_VIRTUAL,
	          __void__rescaleToZeroToOneRange,
	          "Compute the min max range of the image, and then remap this to a 0 to 1 range. ",
	          "");
	I_Method0(void, translateMinToZero,
	          Properties::NON_VIRTUAL,
	          __void__translateMinToZero,
	          "Compute the min color component of the image and then translate and pixels by this offset to make the new min component 0. ",
	          "");
	I_Method0(bool, requiresUpdateTraversal,
	          Properties::VIRTUAL,
	          __bool__requiresUpdateTraversal,
	          "Specify whether ImageLayer requires update traversal. ",
	          "");
	I_Method1(void, update, IN, osg::NodeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__update__osg_NodeVisitor_R1,
	          "Call update on the Layer. ",
	          "");
	I_Method0(void, dirty,
	          Properties::VIRTUAL,
	          __void__dirty,
	          "increment the modified count. ",
	          "\" ");
	I_Method1(void, setModifiedCount, IN, unsigned int, value,
	          Properties::VIRTUAL,
	          __void__setModifiedCount__unsigned_int,
	          "Set the modified count value. ",
	          "");
	I_Method0(unsigned int, getModifiedCount,
	          Properties::VIRTUAL,
	          __unsigned_int__getModifiedCount,
	          "Get modified count value. ",
	          "");
	I_SimpleProperty(const std::string &, FileName, 
	                 __C5_std_string_R1__getFileName, 
	                 __void__setFileName__C5_std_string_R1);
	I_SimpleProperty(osg::Image *, Image, 
	                 __osg_Image_P1__getImage, 
	                 __void__setImage__osg_Image_P1);
	I_SimpleProperty(unsigned int, ModifiedCount, 
	                 __unsigned_int__getModifiedCount, 
	                 __void__setModifiedCount__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgVolume::Layer)
	I_DeclaringFile("osgVolume/Layer");
	I_BaseType(osg::Object);
	I_Constructor0(____Layer,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgVolume::Layer &, x, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Layer__C5_Layer_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
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
	I_Method1(void, setFileName, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __void__setFileName__C5_std_string_R1,
	          "Set the file name of the data associated with this layer. ",
	          "");
	I_Method0(const std::string &, getFileName,
	          Properties::VIRTUAL,
	          __C5_std_string_R1__getFileName,
	          "Get the file name of the layer. ",
	          "");
	I_Method1(void, setLocator, IN, osgVolume::Locator *, locator,
	          Properties::NON_VIRTUAL,
	          __void__setLocator__Locator_P1,
	          "",
	          "");
	I_Method0(osgVolume::Locator *, getLocator,
	          Properties::NON_VIRTUAL,
	          __Locator_P1__getLocator,
	          "",
	          "");
	I_Method0(const osgVolume::Locator *, getLocator,
	          Properties::NON_VIRTUAL,
	          __C5_Locator_P1__getLocator,
	          "",
	          "");
	I_Method1(void, setDefaultValue, IN, const osg::Vec4 &, value,
	          Properties::NON_VIRTUAL,
	          __void__setDefaultValue__C5_osg_Vec4_R1,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getDefaultValue,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4_R1__getDefaultValue,
	          "",
	          "");
	I_Method1(void, setMinFilter, IN, osg::Texture::FilterMode, filter,
	          Properties::NON_VIRTUAL,
	          __void__setMinFilter__osg_Texture_FilterMode,
	          "Set the minification texture filter to use when do texture associated with this layer. ",
	          "");
	I_Method0(osg::Texture::FilterMode, getMinFilter,
	          Properties::NON_VIRTUAL,
	          __osg_Texture_FilterMode__getMinFilter,
	          "Get the minification texture filter to use when do texture associated with this layer. ",
	          "");
	I_Method1(void, setMagFilter, IN, osg::Texture::FilterMode, filter,
	          Properties::NON_VIRTUAL,
	          __void__setMagFilter__osg_Texture_FilterMode,
	          "Set the magniification texture filter to use when do texture associated with this layer. ",
	          "");
	I_Method0(osg::Texture::FilterMode, getMagFilter,
	          Properties::NON_VIRTUAL,
	          __osg_Texture_FilterMode__getMagFilter,
	          "Get the magnification texture filter to use when do texture associated with this layer. ",
	          "");
	I_Method0(osg::Image *, getImage,
	          Properties::VIRTUAL,
	          __osg_Image_P1__getImage,
	          "Return image associated with layer if supported. ",
	          "");
	I_Method0(const osg::Image *, getImage,
	          Properties::VIRTUAL,
	          __C5_osg_Image_P1__getImage,
	          "Return const image associated with layer if supported. ",
	          "");
	I_Method1(void, setProperty, IN, osgVolume::Property *, property,
	          Properties::NON_VIRTUAL,
	          __void__setProperty__Property_P1,
	          "Set the Property (or Properties via the CompositeProperty) that informs the VolumeTechnique how this layer should be rendered. ",
	          "");
	I_Method0(osgVolume::Property *, getProperty,
	          Properties::NON_VIRTUAL,
	          __Property_P1__getProperty,
	          "Get the Property that informs the VolumeTechnique how this layer should be rendered. ",
	          "");
	I_Method0(const osgVolume::Property *, getProperty,
	          Properties::NON_VIRTUAL,
	          __C5_Property_P1__getProperty,
	          "Get the const Property that informs the VolumeTechnique how this layer should be rendered. ",
	          "");
	I_Method1(void, addProperty, IN, osgVolume::Property *, property,
	          Properties::NON_VIRTUAL,
	          __void__addProperty__Property_P1,
	          "Add a property, automatically creating a CompositePorperty if one isn't already assigned. ",
	          "");
	I_Method0(bool, requiresUpdateTraversal,
	          Properties::VIRTUAL,
	          __bool__requiresUpdateTraversal,
	          "Specify whether ImageLayer requires update traversal. ",
	          "");
	I_Method1(void, update, IN, osg::NodeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__update__osg_NodeVisitor_R1,
	          "Call update on the Layer. ",
	          "");
	I_Method0(void, dirty,
	          Properties::VIRTUAL,
	          __void__dirty,
	          "increment the modified count. ",
	          "\" ");
	I_Method1(void, setModifiedCount, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __void__setModifiedCount__unsigned,
	          "Set the modified count value. ",
	          "");
	I_Method0(unsigned int, getModifiedCount,
	          Properties::VIRTUAL,
	          __unsigned_int__getModifiedCount,
	          "Get modified count value. ",
	          "");
	I_Method0(osg::BoundingSphere, computeBound,
	          Properties::VIRTUAL,
	          __osg_BoundingSphere__computeBound,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec4 &, DefaultValue, 
	                 __C5_osg_Vec4_R1__getDefaultValue, 
	                 __void__setDefaultValue__C5_osg_Vec4_R1);
	I_SimpleProperty(const std::string &, FileName, 
	                 __C5_std_string_R1__getFileName, 
	                 __void__setFileName__C5_std_string_R1);
	I_SimpleProperty(osg::Image *, Image, 
	                 __osg_Image_P1__getImage, 
	                 0);
	I_SimpleProperty(osgVolume::Locator *, Locator, 
	                 __Locator_P1__getLocator, 
	                 __void__setLocator__Locator_P1);
	I_SimpleProperty(osg::Texture::FilterMode, MagFilter, 
	                 __osg_Texture_FilterMode__getMagFilter, 
	                 __void__setMagFilter__osg_Texture_FilterMode);
	I_SimpleProperty(osg::Texture::FilterMode, MinFilter, 
	                 __osg_Texture_FilterMode__getMinFilter, 
	                 __void__setMinFilter__osg_Texture_FilterMode);
	I_SimpleProperty(unsigned, ModifiedCount, 
	                 0, 
	                 __void__setModifiedCount__unsigned);
	I_SimpleProperty(osgVolume::Property *, Property, 
	                 __Property_P1__getProperty, 
	                 __void__setProperty__Property_P1);
END_REFLECTOR

