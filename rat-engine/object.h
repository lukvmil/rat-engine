/// uhh hey guys i accidentlaly put 3 slashes instead of two but id ont thin kanyone will notice
// anyway my names is luke and this is rat engine (haha)
// yeah so i guess that about wraps it up
// if you have any questions uhh i guess like try to figure it out yourself

#pragma once

#include <iostream>
#include <vector>
#include <glm/glm.hpp>

class Object3D {
	std::vector<glm::vec3> mVerts;
	//std::vector<glm::vec3> mNorms;
	std::vector<std::vector<unsigned int>> mFaces;

public:
	Object3D(float* verts, size_t num_verts, unsigned int* faces, size_t num_faces);

	std::vector<glm::vec3> getVerts() {
		for (unsigned int i = 0; i < 8; i++) {
			glm::vec3 test = mVerts[i];
			std::cout << mVerts[i][0] << " " << mVerts[i][1] << " " << mVerts[i][2] << std::endl;
		}
		return mVerts;
	}

	std::vector<std::vector<unsigned int>> getFaces() {
		return mFaces;
	}
};