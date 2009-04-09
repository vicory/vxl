#ifndef boxm_utils_h_
#define boxm_utils_h_

//:
// \file
// \brief  The utility methods for the boxm project
//
// \author Gamze Tunali
// \date 04/07/2009
// \verbatim
//  Modifications
//  
// \endverbatim

#include <vgl/vgl_box_3d.h>
#include <vpgl/vpgl_camera.h>
#include <boct/boct_tree_cell.h>

//: returns true if a given box is visible from the camera
// and the image plane
bool is_visible(vgl_box_3d<double> const& bbox, 
                vpgl_camera_double_sptr const& camera, 
                unsigned int img_ni, unsigned int img_nj, 
                bool do_front_test = true);


//: returns the visible faces of a box given a camera. It puts
// a bit 1 for each face visible based on the boct_cell_face values.
boct_face_idx visible_faces(vgl_box_3d<double> &bbox, 
                            vpgl_camera_double_sptr camera);

#endif