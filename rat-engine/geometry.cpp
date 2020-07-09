#pragma once

#include <iostream>
#include <glm/glm.hpp>

#include "geometry.h"

// DISPLAY OBJECTS

Line::Line() {
	mPos[0] = glm::vec3(0.0f);
	mPos[1] = glm::vec3(0.0f);
}

Line::Line(glm::vec3 Pos1, glm::vec3 Pos2) {
	mPos[0] = Pos1;
	mPos[1] = Pos2;
}

std::ostream& operator<<(std::ostream& os, const Line& l) {
	os << "Pt 1: (" << l.mPos[0][0] << ", " << l.mPos[0][1] << ", " << l.mPos[0][2] << ")" << std::endl;
	os << "Pt 2: (" << l.mPos[1][0] << ", " << l.mPos[1][1] << ", " << l.mPos[1][2] << ")";
	return os;
}

glm::vec3* Line::getPos() {
	return mPos;
}

void Line::updatePos(glm::vec3 Pos1, glm::vec3 Pos2) {
	mPos[0] = Pos1;
	mPos[1] = Pos2;
}



Poly::Poly() {
	mPos[0] = glm::vec3(0.0f);
	mPos[1] = glm::vec3(0.0f);
	mPos[2] = glm::vec3(0.0f);
}

Poly::Poly(glm::vec3 Pos1, glm::vec3 Pos2, glm::vec3 Pos3) {
	mPos[0] = Pos1;
	mPos[1] = Pos2;
	mPos[2] = Pos3;
}

std::ostream& operator<<(std::ostream& os, const Poly& p) {
	os << "Pt 1: (" << p.mPos[0][0] << ", " << p.mPos[0][1] << ", " << p.mPos[0][2] << ")" << std::endl;
	os << "Pt 2: (" << p.mPos[1][0] << ", " << p.mPos[1][1] << ", " << p.mPos[1][2] << ")" << std::endl;
	os << "Pt 3: (" << p.mPos[2][0] << ", " << p.mPos[2][1] << ", " << p.mPos[2][2] << ")";
	return os;
}

glm::vec3* Poly::getPos() {
	return mPos;
}

void Poly::updatePos(glm::vec3 Pos1, glm::vec3 Pos2, glm::vec3 Pos3) {
	mPos[0] = Pos1;
	mPos[1] = Pos2;
	mPos[2] = Pos3;
}



// GEOMETERY OBJECTS

Ray::Ray() {
	mPos = glm::vec3(0.0f);
	mVec = glm::vec3(0.0f);
}

Ray::Ray(glm::vec3 pos, glm::vec3 vec) {
	mPos = pos;
	mVec = vec;
}

Ray::Ray(Line line) {
	glm::vec3* linePos = line.getPos();

	// creates position from first point
	mPos = linePos[0];
	// creates vector from difference between points
	mVec = linePos[1] - linePos[0];
}

std::ostream& operator<<(std::ostream& os, const Ray& r) {
	os << "Pos: (" << r.mPos[0] << ", " << r.mPos[1] << ", " << r.mPos[2] << ")" << std::endl;
	os << "Vec: (" << r.mVec[0] << ", " << r.mVec[1] << ", " << r.mVec[2] << ")";
	return os;
}

glm::vec3 Ray::getPos() {
	return mPos;
}

glm::vec3 Ray::getVec() {
	return mVec;
}



Plane::Plane() {
	mPos = glm::vec3(0.0f);
	mNorm = glm::vec3(0.0f);
}

Plane::Plane(glm::vec3 pos, glm::vec3 norm) {
	mPos = pos;
	mNorm = norm;
}

Plane::Plane(Poly poly) {
	glm::vec3* polyPos = poly.getPos();

	// creates position from first point
	mPos = polyPos[0];

	// creates 2 vectors from points in the poly
	glm::vec3 pVec1 = polyPos[0] - polyPos[2];
	glm::vec3 pVec2 = polyPos[1] - polyPos[0];

	// normal vector calculated by crossing these 2 vectors
	mNorm = glm::cross(pVec1, pVec2);
}

std::ostream& operator<<(std::ostream& os, const Plane& p) {
	os << "Pos: (" << p.mPos[0] << ", " << p.mPos[1] << ", " << p.mPos[2] << ")" << std::endl;
	os << "Norm: (" << p.mNorm[0] << ", " << p.mNorm[1] << ", " << p.mNorm[2] << ")";
	return os;
}

glm::vec3 Plane::getPos() {
	return mPos;
}

glm::vec3 Plane::getNorm() {
	return mNorm;
}