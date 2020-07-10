#pragma once

#include "object.h"

Object3D::Object3D(float* verts, unsigned int num_verts) {
	// converts every 3 floats into a vec3 vertex
	for (int i = 0; i < num_verts; i += 3) {
		glm::vec3 current_vert = glm::vec3(verts[i], verts[i + 1], verts[i + 2]);
		mVerts.push_back(current_vert);
	}
}