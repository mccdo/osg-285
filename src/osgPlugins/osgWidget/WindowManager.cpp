// -*-c++-*- osgWidget - Code by: Jeremy Moles (cubicool) 2007-2008
// $Id$

#include <osgDB/Registry>
#include <osgDB/Input>
#include <osgDB/Output>
#include <osgDB/FileUtils>
#include <osgWidget/WindowManager>

bool osgWidget_WindowManager_readData(osg::Object& /*obj*/, osgDB::Input& fr)
{
	osgWidget::warn() << "WindowManager read" << std::endl;
	
	return false;
}

bool osgWidget_WindowManager_writeData(const osg::Object& /*obj*/, osgDB::Output& fw)
{
	// const osgWidget::WindowManager& model = static_cast<const osgWidget::WindowManager&>(obj);
	
	fw.indent() << fw.wrapString("WindowManager stuff...") << std::endl;

	return true;
}

osgDB::RegisterDotOsgWrapperProxy g_osgWidget_WindowManagerProxy(
	new osgWidget::WindowManager(),
	"osgWidget::WindowManager",
	"Object Node Group Switch osgWidget::WindowManager",
	&osgWidget_WindowManager_readData,
	&osgWidget_WindowManager_writeData
);
