#pragma once

#include <iostream>
#include <vector>
#include "object.h"

Object3D::Object3D(float* verts, size_t num_verts, unsigned int* faces, size_t num_faces) {
	// converts every 3 floats into a vec3 vertex
	for (unsigned int i = 0; i < num_verts * 3; i += 3) {
		glm::vec3 current_vert = glm::vec3(verts[i], verts[i + 1], verts[i + 2]);
		std::cout << current_vert[0] << " " << current_vert[1] << " " << current_vert[2] << "   " << verts[i] << " " << verts[i + 1] << " " << verts[i + 2] << std::endl;
		mVerts.push_back(current_vert);
	}

	for (unsigned int i = 0; i < num_faces * 3; i += 3) {
		std::vector<unsigned int> current_face = { faces[i], faces[i + 1], faces[i + 2] };
		mFaces.push_back(current_face);
	}
}