#ifndef _WX_GUI_ID_HPP
#define _WX_GUI_ID_HPP

#include <wx/defs.h>

// Image Frame Ids
#define IMAGE_FRAME_FIRST_ID             wxID_HIGHEST + 1
#define wxID_VIEW_ORIGINAL_SIZE          IMAGE_FRAME_FIRST_ID + 1
#define wxID_VIEW_MODE_FIXED             IMAGE_FRAME_FIRST_ID + 2
#define wxID_VIEW_MODE_VARYING           IMAGE_FRAME_FIRST_ID + 3
#define wxID_VIEW_IN_MODEL_WINDOW        IMAGE_FRAME_FIRST_ID + 4
#define wxID_EDIT_ROTATE_CW              IMAGE_FRAME_FIRST_ID + 5
#define wxID_EDIT_ROTATE_CCW             IMAGE_FRAME_FIRST_ID + 6
#define wxID_MODE_DEFAULT                IMAGE_FRAME_FIRST_ID + 7
#define wxID_MODE_RegionGrowING         IMAGE_FRAME_FIRST_ID + 8
#define wxID_VIEW_GRAIDENT_IMAGE         IMAGE_FRAME_FIRST_ID + 9
// #define wxID_MODE_DRAWING                IMAGE_FRAME_FIRST_ID + 9
// #define wxID_DRAWING_MODE_CUBOID         IMAGE_FRAME_FIRST_ID + 10
// #define wxID_DRAWING_MODE_CYLIDER        IMAGE_FRAME_FIRST_ID + 11
// #define wxID_DRAWING_MODE_CONE           IMAGE_FRAME_FIRST_ID + 12
// #define wxID_DRAWING_MODE_SPHERE         IMAGE_FRAME_FIRST_ID + 13

// Main Frame Ids
#define MAIN_FRAME_FIRST_ID              wxID_HIGHEST + 100
#define wxID_OPEN_IMAGE                  MAIN_FRAME_FIRST_ID + 1
#define wxID_OPEN_POINT_CLOUD            MAIN_FRAME_FIRST_ID + 2
#define wxID_OPEN_MODEL                  MAIN_FRAME_FIRST_ID + 3
#define wxID_EDIT_CLEAR_LOG              MAIN_FRAME_FIRST_ID + 4
#define wxID_MODEL_IMAGE                 MAIN_FRAME_FIRST_ID + 5

// Scene Graph Frame Ids
#define SCENE_GRAPH_FRAME_FIRST_ID                      wxID_HIGHEST + 200
// rendering modes
#define wxID_MODES_RENDER_MODE_POINT                    SCENE_GRAPH_FRAME_FIRST_ID + 1
#define wxID_MODES_RENDER_MODE_WIREFRAME                SCENE_GRAPH_FRAME_FIRST_ID + 2
#define wxID_MODES_RENDER_MODE_FILL                     SCENE_GRAPH_FRAME_FIRST_ID + 3
#define wxID_MODES_RENDER_FACE_FRONT                    SCENE_GRAPH_FRAME_FIRST_ID + 4
#define wxID_MODES_RENDER_FACE_BACK                     SCENE_GRAPH_FRAME_FIRST_ID + 5
#define wxID_MODES_RENDER_FACE_FRONT_AND_BACK           SCENE_GRAPH_FRAME_FIRST_ID + 6
#define wxID_MODES_RENDER_PLANAR_SECTIONS               SCENE_GRAPH_FRAME_FIRST_ID + 7
#define wxID_MODES_RENDER_PLANAR_AND_VERTICAL_SECTIONS  SCENE_GRAPH_FRAME_FIRST_ID + 8
#define wxID_MODES_RENDER_TRIANGLE_STRIP                SCENE_GRAPH_FRAME_FIRST_ID + 9
#define wxID_MODES_RENDER_TRIANGLE_FAN                  SCENE_GRAPH_FRAME_FIRST_ID + 10

#define wxID_OSG_OPEN_MODEL                             SCENE_GRAPH_FRAME_FIRST_ID + 11
#define wxID_OSG_OPEN_IMAGE                             SCENE_GRAPH_FRAME_FIRST_ID + 12

#define wxID_PRINT_PROJECTION_AND_MODEL_VIEW_MATRICES   SCENE_GRAPH_FRAME_FIRST_ID + 14
#define wxID_EDIT_CLEAR_VIEW                            SCENE_GRAPH_FRAME_FIRST_ID + 15

#define wxID_MODEL_SPINE_DRAWING_MODE_CONTINUOUS        SCENE_GRAPH_FRAME_FIRST_ID + 17
#define wxID_MODEL_SPINE_DRAWING_MODE_PIECEWISE_LINEAR  SCENE_GRAPH_FRAME_FIRST_ID + 18
#define wxID_MODEL_SAVE_COMPONENT                       SCENE_GRAPH_FRAME_FIRST_ID + 19
#define wxID_MODEL_SAVE_MODEL                           SCENE_GRAPH_FRAME_FIRST_ID + 20
#define wxID_MODEL_DELETE_SELECTED_COMPONENTS           SCENE_GRAPH_FRAME_FIRST_ID + 21
#define wxID_MODEL_DELETE_MODEL                         SCENE_GRAPH_FRAME_FIRST_ID + 22
#define wxID_VIEW_DISPLAY_LOCAL_FRAMES                  SCENE_GRAPH_FRAME_FIRST_ID + 23
#define wxID_VIEW_DISPLAY_COORDINATE_FRAME              SCENE_GRAPH_FRAME_FIRST_ID + 24
#define wxID_VIEW_DISPLAY_VERTEX_NORMALS                SCENE_GRAPH_FRAME_FIRST_ID + 25
#define wxID_VIEW_DISPLAY_SECTION_NORMALS               SCENE_GRAPH_FRAME_FIRST_ID + 26
#define wxID_VIEW_DISPLAY_IMAGE                         SCENE_GRAPH_FRAME_FIRST_ID + 27
#define wxID_VIEW_DISPLAY_GRADIENT_IMAGE                SCENE_GRAPH_FRAME_FIRST_ID + 28
#define wxID_WINDOWS_COMPONENT_RELATIONS                SCENE_GRAPH_FRAME_FIRST_ID + 29
#define wxID_MODES_OPERATION_MODE_DISPLAY               SCENE_GRAPH_FRAME_FIRST_ID + 30
#define wxID_MODES_OPERATION_MODE_MODELLING             SCENE_GRAPH_FRAME_FIRST_ID + 31
#define wxID_MODEL_SOLVE                                SCENE_GRAPH_FRAME_FIRST_ID + 32

// section constraints:
#define wxID_MODEl_CONSTRAINTS_CONSTANT_SECTIONS        SCENE_GRAPH_FRAME_FIRST_ID + 33
#define wxID_MODEL_CONSTRAINTS_LINEARLY_SCALED_SECTIONS SCENE_GRAPH_FRAME_FIRST_ID + 34
#define wxID_MODEL_CONSTRAINTS_NO_SECTION_CONSTRAINTS   SCENE_GRAPH_FRAME_FIRST_ID + 35
// spine constraints:
#define wxID_MODEL_CONSTRAINTS_NO_SPINE_CONSTRAINTS     SCENE_GRAPH_FRAME_FIRST_ID + 36
#define wxID_MODEL_CONSTRAINTS_STRAIGHT_PLANAR_SPINE    SCENE_GRAPH_FRAME_FIRST_ID + 37
#define wxID_MODEL_CONSTRAINTS_PLANAR_SPINE_POINTS      SCENE_GRAPH_FRAME_FIRST_ID + 38

#define wxID_MODES_PERSPECTIVE_PROJECTION               SCENE_GRAPH_FRAME_FIRST_ID + 39
#define wxID_MODES_ORTHOGRAPHIC_PROJECTION              SCENE_GRAPH_FRAME_FIRST_ID + 40

#define wxID_COMPONENT_RELATIONS_APPLY_BUTTON           wxID_HIGHEST + 400
#define wxID_COMPONENT_RELATIONS_CLOSE_BUTTON           wxID_HIGHEST + 401

#endif // WXGUIID_HPP
