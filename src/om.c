#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

#include "op/gl/opengl.h"

#include "game.h"

const int WIDTH = 1350;
const int HEIGHT = 900;



//  initialize context
void init(const char *title, bool isFullscreen) {
    puts("initialize...");
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

    GLFWmonitor *monitor = NULL;

    if (isFullscreen)
    {
        monitor = glfwGetPrimaryMonitor();
    }
    GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, title, monitor, NULL);
    start(window);
    
    puts("terminate...");
    glfwTerminate();
}