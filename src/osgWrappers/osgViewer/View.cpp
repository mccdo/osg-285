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

#include <osg/Camera>
#include <osg/CopyOp>
#include <osg/DisplaySettings>
#include <osg/Image>
#include <osg/Matrixd>
#include <osg/Node>
#include <osg/Object>
#include <osg/Timer>
#include <osg/View>
#include <osgDB/DatabasePager>
#include <osgDB/ImagePager>
#include <osgGA/EventQueue>
#include <osgGA/GUIEventHandler>
#include <osgGA/MatrixManipulator>
#include <osgUtil/LineSegmentIntersector>
#include <osgUtil/SceneView>
#include <osgViewer/Scene>
#include <osgViewer/View>
#include <osgViewer/ViewerBase>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >, osgViewer::View::EventHandlers)

BEGIN_OBJECT_REFLECTOR(osgViewer::View)
	I_DeclaringFile("osgViewer/View");
	I_BaseType(osg::View);
	I_BaseType(osgGA::GUIActionAdapter);
	I_Constructor0(____View,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgViewer::View &, view, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____View__C5_osgViewer_View_R1__C5_osg_CopyOp_R1,
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
	I_Method0(osg::View *, asView,
	          Properties::VIRTUAL,
	          __osg_View_P1__asView,
	          "Provide a mechanism for getting the osg::View associated from the GUIActionAdapter. ",
	          "One would use this to case view to osgViewer::View(er) if supported by the subclass. ");
	I_Method0(osgViewer::ViewerBase *, getViewerBase,
	          Properties::NON_VIRTUAL,
	          __ViewerBase_P1__getViewerBase,
	          "Provide a mechanism for getting the viewer object from this osgViewer::View. ",
	          "In the case of a osgViewer::Viewer the ViewerBase will effectively point to this object as Viewer subclasses from View. In the case of a osgViewer::CompsoiteViewer the ViewerBase will point to the CompositeViewer that owns this View. ");
	I_Method1(void, take, IN, osg::View &, rhs,
	          Properties::VIRTUAL,
	          __void__take__osg_View_R1,
	          "Take all the settings, Camera and Slaves from the passed in view, leaving it empty. ",
	          "");
	I_Method1(void, setStartTick, IN, osg::Timer_t, tick,
	          Properties::VIRTUAL,
	          __void__setStartTick__osg_Timer_t,
	          "",
	          "");
	I_Method0(osg::Timer_t, getStartTick,
	          Properties::NON_VIRTUAL,
	          __osg_Timer_t__getStartTick,
	          "",
	          "");
	I_Method0(osgViewer::Scene *, getScene,
	          Properties::NON_VIRTUAL,
	          __Scene_P1__getScene,
	          "",
	          "");
	I_Method0(const osgViewer::Scene *, getScene,
	          Properties::NON_VIRTUAL,
	          __C5_Scene_P1__getScene,
	          "",
	          "");
	I_Method1(void, setSceneData, IN, osg::Node *, node,
	          Properties::VIRTUAL,
	          __void__setSceneData__osg_Node_P1,
	          "Set the scene graph that the View will use. ",
	          "");
	I_Method0(osg::Node *, getSceneData,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getSceneData,
	          "Get the View's scene graph. ",
	          "");
	I_Method0(const osg::Node *, getSceneData,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Node_P1__getSceneData,
	          "Get the const View's scene graph. ",
	          "");
	I_Method1(void, setDatabasePager, IN, osgDB::DatabasePager *, dp,
	          Properties::NON_VIRTUAL,
	          __void__setDatabasePager__osgDB_DatabasePager_P1,
	          "Set the View's database pager. ",
	          "");
	I_Method0(osgDB::DatabasePager *, getDatabasePager,
	          Properties::NON_VIRTUAL,
	          __osgDB_DatabasePager_P1__getDatabasePager,
	          "Get the View's database pager. ",
	          "");
	I_Method0(const osgDB::DatabasePager *, getDatabasePager,
	          Properties::NON_VIRTUAL,
	          __C5_osgDB_DatabasePager_P1__getDatabasePager,
	          "Get the const View's database pager. ",
	          "");
	I_Method1(void, setImagePager, IN, osgDB::ImagePager *, ip,
	          Properties::NON_VIRTUAL,
	          __void__setImagePager__osgDB_ImagePager_P1,
	          "Set the View's image pager. ",
	          "");
	I_Method0(osgDB::ImagePager *, getImagePager,
	          Properties::NON_VIRTUAL,
	          __osgDB_ImagePager_P1__getImagePager,
	          "Get the View's image pager. ",
	          "");
	I_Method0(const osgDB::ImagePager *, getImagePager,
	          Properties::NON_VIRTUAL,
	          __C5_osgDB_ImagePager_P1__getImagePager,
	          "Get the const View's image pager. ",
	          "");
	I_Method1(void, setEventQueue, IN, osgGA::EventQueue *, eventQueue,
	          Properties::NON_VIRTUAL,
	          __void__setEventQueue__osgGA_EventQueue_P1,
	          "",
	          "");
	I_Method0(osgGA::EventQueue *, getEventQueue,
	          Properties::NON_VIRTUAL,
	          __osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method0(const osgGA::EventQueue *, getEventQueue,
	          Properties::NON_VIRTUAL,
	          __C5_osgGA_EventQueue_P1__getEventQueue,
	          "",
	          "");
	I_Method1(void, setCameraManipulator, IN, osgGA::MatrixManipulator *, manipulator,
	          Properties::NON_VIRTUAL,
	          __void__setCameraManipulator__osgGA_MatrixManipulator_P1,
	          "Set the CameraManipulator that moves the View's master Camera position in response to events. ",
	          "");
	I_Method0(osgGA::MatrixManipulator *, getCameraManipulator,
	          Properties::NON_VIRTUAL,
	          __osgGA_MatrixManipulator_P1__getCameraManipulator,
	          "Get the View's CameraManipulator. ",
	          "");
	I_Method0(const osgGA::MatrixManipulator *, getCameraManipulator,
	          Properties::NON_VIRTUAL,
	          __C5_osgGA_MatrixManipulator_P1__getCameraManipulator,
	          "Get the const View's CameraManipulator. ",
	          "");
	I_Method0(void, home,
	          Properties::NON_VIRTUAL,
	          __void__home,
	          "Set the view to the CameraManipulator's home position, if non is attached home() is does nothing. ",
	          "Note, to set the home position use getCamaraManipulator()->setHomePosition(...). ");
	I_Method1(void, addEventHandler, IN, osgGA::GUIEventHandler *, eventHandler,
	          Properties::NON_VIRTUAL,
	          __void__addEventHandler__osgGA_GUIEventHandler_P1,
	          "Add an EventHandler that adds handling of events to the View. ",
	          "");
	I_Method0(osgViewer::View::EventHandlers &, getEventHandlers,
	          Properties::NON_VIRTUAL,
	          __EventHandlers_R1__getEventHandlers,
	          "Get the View's list of EventHandlers. ",
	          "");
	I_Method0(const osgViewer::View::EventHandlers &, getEventHandlers,
	          Properties::NON_VIRTUAL,
	          __C5_EventHandlers_R1__getEventHandlers,
	          "Get the const View's list of EventHandlers. ",
	          "");
	I_Method1(void, setCoordinateSystemNodePath, IN, const osg::NodePath &, nodePath,
	          Properties::NON_VIRTUAL,
	          __void__setCoordinateSystemNodePath__C5_osg_NodePath_R1,
	          "Set the NodePath to any active CoordinateSystemNode present in the Scene. ",
	          "The CoordinateSystemNode path is used to help applications and CamaraManipualtors handle geocentric coordinates systems, such as known which way is the local up at any position on the a whole earth. ");
	I_Method0(osg::NodePath, getCoordinateSystemNodePath,
	          Properties::NON_VIRTUAL,
	          __osg_NodePath__getCoordinateSystemNodePath,
	          "Get the NodePath to any active CoordinateSystemNode present in the Scene. ",
	          "");
	I_Method0(void, computeActiveCoordinateSystemNodePath,
	          Properties::NON_VIRTUAL,
	          __void__computeActiveCoordinateSystemNodePath,
	          "Compute the NodePath to any active CoordinateSystemNode present in the Scene. ",
	          "");
	I_Method1(void, setDisplaySettings, IN, osg::DisplaySettings *, ds,
	          Properties::NON_VIRTUAL,
	          __void__setDisplaySettings__osg_DisplaySettings_P1,
	          "Set the DisplaySettings object associated with this view. ",
	          "");
	I_Method0(osg::DisplaySettings *, getDisplaySettings,
	          Properties::NON_VIRTUAL,
	          __osg_DisplaySettings_P1__getDisplaySettings,
	          "Set the DisplaySettings object associated with this view. ",
	          "");
	I_Method0(const osg::DisplaySettings *, getDisplaySettings,
	          Properties::NON_VIRTUAL,
	          __C5_osg_DisplaySettings_P1__getDisplaySettings,
	          "Set the DisplaySettings object associated with this view. ",
	          "");
	I_MethodWithDefaults2(void, setFusionDistance, IN, osgUtil::SceneView::FusionDistanceMode, mode, , IN, float, value, 1.0f,
	                      Properties::NON_VIRTUAL,
	                      __void__setFusionDistance__osgUtil_SceneView_FusionDistanceMode__float,
	                      "Set the FusionDistanceMode and Value. ",
	                      "Note, is used only when working in stereo. ");
	I_Method0(osgUtil::SceneView::FusionDistanceMode, getFusionDistanceMode,
	          Properties::NON_VIRTUAL,
	          __osgUtil_SceneView_FusionDistanceMode__getFusionDistanceMode,
	          "Get the FusionDistanceMode. ",
	          "");
	I_Method0(float, getFusionDistanceValue,
	          Properties::NON_VIRTUAL,
	          __float__getFusionDistanceValue,
	          "Get the FusionDistanceValue. ",
	          "Note, only used for USE_FUSION_DISTANCE_VALUE & PROPORTIONAL_TO_SCREEN_DISTANCE modes. ");
	I_Method0(void, setUpViewAcrossAllScreens,
	          Properties::NON_VIRTUAL,
	          __void__setUpViewAcrossAllScreens,
	          "Convenience method for creating slave Cameras and associated GraphicsWindows across all screens. ",
	          "");
	I_MethodWithDefaults5(void, setUpViewInWindow, IN, int, x, , IN, int, y, , IN, int, width, , IN, int, height, , IN, unsigned int, screenNum, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__setUpViewInWindow__int__int__int__int__unsigned_int,
	                      "Convenience method for a single camera on a single window. ",
	                      "");
	I_MethodWithDefaults1(void, setUpViewOnSingleScreen, IN, unsigned int, screenNum, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__setUpViewOnSingleScreen__unsigned_int,
	                      "Convenience method for a single camera associated with a single full screen GraphicsWindow. ",
	                      "");
	I_MethodWithDefaults5(void, setUpViewFor3DSphericalDisplay, IN, double, radius, 1.0, IN, double, collar, 0.45, IN, unsigned int, screenNum, 0, IN, osg::Image *, intensityMap, 0, IN, const osg::Matrixd &, projectorMatrix, osg::Matrixd(),
	                      Properties::NON_VIRTUAL,
	                      __void__setUpViewFor3DSphericalDisplay__double__double__unsigned_int__osg_Image_P1__C5_osg_Matrixd_R1,
	                      "Convenience method for spherical display using 6 slave cameras rendering the 6 sides of a cube map, and 7th camera doing distortion correction to present on a spherical display. ",
	                      "");
	I_MethodWithDefaults5(void, setUpViewForPanoramicSphericalDisplay, IN, double, radius, 1.0, IN, double, collar, 0.45, IN, unsigned int, screenNum, 0, IN, osg::Image *, intensityMap, 0, IN, const osg::Matrixd &, projectorMatrix, osg::Matrixd(),
	                      Properties::NON_VIRTUAL,
	                      __void__setUpViewForPanoramicSphericalDisplay__double__double__unsigned_int__osg_Image_P1__C5_osg_Matrixd_R1,
	                      "Convenience method for spherical display by rendering main scene to as panoramic 2:1 texture and then doing distortion correction to present onto a spherical display. ",
	                      "");
	I_Method8(void, setUpViewForWoWVxDisplay, IN, unsigned int, screenNum, IN, unsigned char, wow_content, IN, unsigned char, wow_factor, IN, unsigned char, wow_offset, IN, float, wow_disparity_Zd, IN, float, wow_disparity_vz, IN, float, wow_disparity_M, IN, float, wow_disparity_C,
	          Properties::NON_VIRTUAL,
	          __void__setUpViewForWoWVxDisplay__unsigned_int__unsigned_char__unsigned_char__unsigned_char__float__float__float__float,
	          "Convenience method for autostereoscopic Philips WoWvx display. ",
	          "");
	I_Method1(bool, containsCamera, IN, const osg::Camera *, camera,
	          Properties::NON_VIRTUAL,
	          __bool__containsCamera__C5_osg_Camera_P1,
	          "Return true if this view contains a specified camera. ",
	          "");
	I_Method4(const osg::Camera *, getCameraContainingPosition, IN, float, x, IN, float, y, IN, float &, local_x, IN, float &, local_y,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Camera_P1__getCameraContainingPosition__float__float__float_R1__float_R1,
	          "Get the camera which contains the pointer position x,y specified master cameras window/eye coords. ",
	          "Also passes back the local window coords for the graphics context associated with the camera passed back. ");
	I_MethodWithDefaults4(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, osgUtil::LineSegmentIntersector::Intersections &, intersections, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                      Properties::NON_VIRTUAL,
	                      __bool__computeIntersections__float__float__osgUtil_LineSegmentIntersector_Intersections_R1__osg_Node_NodeMask,
	                      "Compute intersections between a ray through the specified master cameras window/eye coords and a specified node. ",
	                      "Note, when a master cameras has slaves and no viewport itself its coordinate frame will be in clip space i.e. -1,-1 to 1,1, while if its has a viewport the coordintates will be relative to its viewport dimensions. Mouse events handled by the view will automatically be attached into the master camera window/clip coords so can be passed directly on to the computeIntersections method. ");
	I_MethodWithDefaults5(bool, computeIntersections, IN, float, x, , IN, float, y, , IN, const osg::NodePath &, nodePath, , IN, osgUtil::LineSegmentIntersector::Intersections &, intersections, , IN, osg::Node::NodeMask, traversalMask, 0xffffffff,
	                      Properties::NON_VIRTUAL,
	                      __bool__computeIntersections__float__float__C5_osg_NodePath_R1__osgUtil_LineSegmentIntersector_Intersections_R1__osg_Node_NodeMask,
	                      "Compute intersections between a ray through the specified master cameras window/eye coords and a specified nodePath's subgraph. ",
	                      "");
	I_Method0(void, requestRedraw,
	          Properties::VIRTUAL,
	          __void__requestRedraw,
	          "requestRedraw() requests a single redraw. ",
	          "");
	I_MethodWithDefaults1(void, requestContinuousUpdate, IN, bool, needed, true,
	                      Properties::VIRTUAL,
	                      __void__requestContinuousUpdate__bool,
	                      "requestContinousUpdate(bool) is for en/disabling a throw or idle callback to be requested by a GUIEventHandler (typically a MatrixManipulator, though other GUIEventHandler's may also provide functionality). ",
	                      "GUI toolkits can respond to this immediately by registering an idle/timed callback, or can delay setting the callback and update at their own leisure. ");
	I_Method2(void, requestWarpPointer, IN, float, x, IN, float, y,
	          Properties::VIRTUAL,
	          __void__requestWarpPointer__float__float,
	          "requestWarpPointer(int,int) is requesting a repositioning of the mouse pointer to a specified x,y location on the window. ",
	          "This is used by some camera manipulators to initialise the mouse pointer when mouse position relative to a controls neutral mouse position is required, i.e when mimicking a aircrafts joystick. ");
	I_Method0(void, assignSceneDataToCameras,
	          Properties::NON_VIRTUAL,
	          __void__assignSceneDataToCameras,
	          "",
	          "");
	I_Method0(void, init,
	          Properties::NON_VIRTUAL,
	          __void__init,
	          "",
	          "");
	I_ProtectedMethod1(osg::GraphicsOperation *, createRenderer, IN, osg::Camera *, camera,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __osg_GraphicsOperation_P1__createRenderer__osg_Camera_P1,
	                   "",
	                   "");
	I_SimpleProperty(osgGA::MatrixManipulator *, CameraManipulator, 
	                 __osgGA_MatrixManipulator_P1__getCameraManipulator, 
	                 __void__setCameraManipulator__osgGA_MatrixManipulator_P1);
	I_SimpleProperty(osg::NodePath, CoordinateSystemNodePath, 
	                 __osg_NodePath__getCoordinateSystemNodePath, 
	                 __void__setCoordinateSystemNodePath__C5_osg_NodePath_R1);
	I_SimpleProperty(osgDB::DatabasePager *, DatabasePager, 
	                 __osgDB_DatabasePager_P1__getDatabasePager, 
	                 __void__setDatabasePager__osgDB_DatabasePager_P1);
	I_SimpleProperty(osg::DisplaySettings *, DisplaySettings, 
	                 __osg_DisplaySettings_P1__getDisplaySettings, 
	                 __void__setDisplaySettings__osg_DisplaySettings_P1);
	I_SimpleProperty(osgViewer::View::EventHandlers &, EventHandlers, 
	                 __EventHandlers_R1__getEventHandlers, 
	                 0);
	I_SimpleProperty(osgGA::EventQueue *, EventQueue, 
	                 __osgGA_EventQueue_P1__getEventQueue, 
	                 __void__setEventQueue__osgGA_EventQueue_P1);
	I_SimpleProperty(osgUtil::SceneView::FusionDistanceMode, FusionDistanceMode, 
	                 __osgUtil_SceneView_FusionDistanceMode__getFusionDistanceMode, 
	                 0);
	I_SimpleProperty(float, FusionDistanceValue, 
	                 __float__getFusionDistanceValue, 
	                 0);
	I_SimpleProperty(osgDB::ImagePager *, ImagePager, 
	                 __osgDB_ImagePager_P1__getImagePager, 
	                 __void__setImagePager__osgDB_ImagePager_P1);
	I_SimpleProperty(osgViewer::Scene *, Scene, 
	                 __Scene_P1__getScene, 
	                 0);
	I_SimpleProperty(osg::Node *, SceneData, 
	                 __osg_Node_P1__getSceneData, 
	                 __void__setSceneData__osg_Node_P1);
	I_SimpleProperty(osg::Timer_t, StartTick, 
	                 __osg_Timer_t__getStartTick, 
	                 __void__setStartTick__osg_Timer_t);
	I_SimpleProperty(unsigned int, UpViewOnSingleScreen, 
	                 0, 
	                 __void__setUpViewOnSingleScreen__unsigned_int);
	I_SimpleProperty(osgViewer::ViewerBase *, ViewerBase, 
	                 __ViewerBase_P1__getViewerBase, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgGA::GUIEventHandler >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgGA::GUIEventHandler *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgGA::GUIEventHandler > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgGA::GUIEventHandler *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgGA::GUIEventHandler *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgGA::GUIEventHandler > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgGA::GUIEventHandler *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osgGA::GUIEventHandler > >)

