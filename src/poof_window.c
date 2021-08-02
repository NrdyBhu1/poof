#include <POOF/poof.h>

POOF_Window* poofCreateWindow(int width, int height, const char* title) {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
#ifdef __APPLE__
	glfwWindowHint(GLFW_OPENGL_COMPAT_PROFILE, GL_TRUE);
#endif

    POOF_Window* window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (window == NULL) {
      poofLog(LOG_ERROR, "Window creation failed!");
      poofTerminate();
    }
    glfwMakeContextCurrent(window);
    gladLoadGL();
    glViewport(0, 0, width, height);
    return window;
}

bool poofWindowShouldClose(POOF_Window* window) {
    return glfwWindowShouldClose(window);
}

void poofPollEvents() {
    glfwPollEvents();
}

void poofSwapBuffers(POOF_Window* buffer) {
    glfwSwapBuffers(buffer);
}

void poofDestroyWindow(POOF_Window* window) {
    glfwDestroyWindow(window);
}
