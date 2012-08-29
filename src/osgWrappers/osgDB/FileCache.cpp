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

#include <osg/Node>
#include <osgDB/FileCache>
#include <osgDB/ReaderWriter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgDB::FileCache)
	I_DeclaringFile("osgDB/FileCache");
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, const std::string &, path,
	               Properties::NON_EXPLICIT,
	               ____FileCache__C5_std_string_R1,
	               "",
	               "");
	I_Method0(const std::string &, getFileCachePath,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getFileCachePath,
	          "",
	          "");
	I_Method1(std::string, createCacheFileName, IN, const std::string &, originalFileName,
	          Properties::VIRTUAL,
	          __std_string__createCacheFileName__C5_std_string_R1,
	          "",
	          "");
	I_Method1(bool, existsInCache, IN, const std::string &, originalFileName,
	          Properties::VIRTUAL,
	          __bool__existsInCache__C5_std_string_R1,
	          "",
	          "");
	I_MethodWithDefaults3(osgDB::ReaderWriter::ReadResult, readNode, IN, const std::string &, originalFileName, , IN, const osgDB::ReaderWriter::Options *, options, , IN, bool, buildKdTreeIfRequired, true,
	                      Properties::VIRTUAL,
	                      __ReaderWriter_ReadResult__readNode__C5_std_string_R1__C5_osgDB_ReaderWriter_Options_P1__bool,
	                      "",
	                      "");
	I_Method3(osgDB::ReaderWriter::WriteResult, writeNode, IN, const osg::Node &, node, IN, const std::string &, originalFileName, IN, const osgDB::ReaderWriter::Options *, options,
	          Properties::VIRTUAL,
	          __ReaderWriter_WriteResult__writeNode__C5_osg_Node_R1__C5_std_string_R1__C5_osgDB_ReaderWriter_Options_P1,
	          "",
	          "");
	I_SimpleProperty(const std::string &, FileCachePath, 
	                 __C5_std_string_R1__getFileCachePath, 
	                 0);
END_REFLECTOR

