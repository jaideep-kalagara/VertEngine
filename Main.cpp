#include <iostream>
#include <GLFW/glfw3.h>

#include "Logger.h"

#define WIDTH 800
#define HEIGHT 600

int main() {
	// initialize GLFW
	if (!glfwInit()) {
		VertEngine::Logger::error("Failed to initialize GLFW!");
		return EXIT_FAILURE;
	}

	// create GLFW window
	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "VertEngine v1.0", NULL, NULL);
	if (!window) {
		VertEngine::Logger::error("Failed to create GLFW window!");
		glfwTerminate();
		return EXIT_FAILURE;
	}

	VertEngine::Logger::info("VertEngine v1.0");

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	// clean up GLFW
	glfwDestroyWindow(window);
	glfwTerminate();


	return EXIT_SUCCESS;
}