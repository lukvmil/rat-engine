#include <iostream>

#include <glad\glad.h>
#include <GLFW\glfw3.h>

#include "geometry.h"

const unsigned int width = 800;
const unsigned int height = 600;

int main() {
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(width, height, "Rat Engine", NULL, NULL);

	std::cout << "Hello world" << std::endl;
	return 0;
}