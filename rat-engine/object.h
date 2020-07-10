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
	std::vector<glm::vec3> mNorms;

public:
	Object3D(float* verts, unsigned int num_verts);
};