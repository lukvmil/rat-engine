#pragma once

#include <iostream>

#include <glm/glm.hpp>

// DISPLAY OBJECTS

class Line {
	glm::vec3 mPos[2];

public:
	Line();
	Line(glm::vec3 Pos1, glm::vec3 Pos2);
	friend std::ostream& operator<<(std::ostream& os, const Line& line);

	glm::vec3* getPos();
	void updatePos(glm::vec3 Pos1, glm::vec3 Pos2);
};

class Poly {
	glm::vec3 mPos[3];

public:
	Poly();
	Poly(glm::vec3 Pos1, glm::vec3 Pos2, glm::vec3 Pos3);
	friend std::ostream& operator<<(std::ostream& os, const Poly& poly);

	glm::vec3* getPos();
	void updatePos(glm::vec3 Pos1, glm::vec3 Pos2, glm::vec3 Pos3);
};



// GEOMETRY OBJECTS

class Ray {
	glm::vec3 mPos;
	glm::vec3 mVec;

public:
	Ray();
	Ray(glm::vec3 pos, glm::vec3 vec);
	Ray(Line line);
	friend std::ostream& operator<<(std::ostream& os, const Ray& ray);

	glm::vec3 getPos();
	glm::vec3 getVec();
};

class Plane {
	glm::vec3 mPos;
	glm::vec3 mNorm;

public:
	Plane();
	Plane(glm::vec3 pos, glm::vec3 norm);
	Plane(Poly poly);
	friend std::ostream& operator<<(std::ostream& os, const Plane& plane);

	glm::vec3 getPos();
	glm::vec3 getNorm();
};

