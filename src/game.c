#include "opengl.h"

GLFWwindow *WINDOW;

//  don't know why, but we put `void` in the param args ... for the heck of it (???)
static void loop() {
    while(!glfwWindowShouldClose(WINDOW)) {
        if (glfwGetKey(WINDOW, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        { glfwSetWindowShouldClose(WINDOW, GL_TRUE); }

        // Background Fill Color
        glClearColor(0.25f, 0.25f, 0.25f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(WINDOW);
        glfwPollEvents();
    }
}

void start(GLFWwindow *window) {
    glfwMakeContextCurrent(WINDOW = window);
    loop();
}