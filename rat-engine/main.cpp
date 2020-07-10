#include <iostream>
#include <stdio.h>

#include <glad\glad.h>
#include <GLFW\glfw3.h>

#include "geometry.h"
#include "object.h"

using namespace std;

const unsigned int width = 800;
const unsigned int height = 600;

int main() {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(width, height, "Rat Engine", NULL, NULL);

	cout << "Hello world" << endl;

	glm::vec3 p1(1.0f, 1.0f, 1.0f);
	glm::vec3 p2(2.0f, 0.0f, -1.0f);
	glm::vec3 p3(3.0f, 2.0f, 3.0f);

	float verts[] = {
		0.0f, 0.0f, 0.0f,
		1.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f,
		1.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 1.0f,
		1.0f, 0.0f, 1.0f,
		0.0f, 1.0f, 1.0f,
		1.0f, 1.0f, 1.0f
	};

	unsigned int elements[] = {
		0, 1, 2,
		0, 2, 3
	};

	Object3D bruh(verts, 8, elements, 2);

	std::cout << sizeof(verts) << std::endl;
	std::vector<glm::vec3> pts = bruh.getVerts();

	

	return 0;
}