#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>

class Ray {
	glm::vec3 mPos;
	glm::vec3 mVec;

	Ray();
	Ray(Line line);
};

class Plane {
	glm::vec3 mPos;
	glm::vec3 mNorm;

	Plane();
	Plane(Poly poly);
};

class Poly {
	glm::vec3 mPos1;
	glm::vec3 mPos2;
	glm::vec3 mPos3;

	Poly();
};

class Line {
	glm::vec3 mPos1;
	glm::vec3 mPos2;

	Line();
};