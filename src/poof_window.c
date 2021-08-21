#include <POOF/poof.h>

POOF_Window* poofCreateWindow(int width, int height, const char* title, uint32_t flags) {
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_COMPAT_PROFILE, GL_TRUE);
#endif
    POOF_Window* window;
    GLFWmonitor* mon = NULL;
    int ww = width;
    int wh = height;
    
    if (flags & POOF_WINDOW_FULLSCREEN_DESKTOP) {
        mon = glfwGetPrimaryMonitor();
    } else if (flags & POOF_WINDOW_FULLSCREEN) {
        mon = glfwGetPrimaryMonitor();
        const GLFWvidmode* mode = glfwGetVideoMode(mon);
        glfwWindowHint(GLFW_RED_BITS, mode->redBits);
        glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
        glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
        glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
        ww = mode->width;
        wh = mode->height;
    }

    if (flags & POOF_WINDOW_RESIZABLE) {
      glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
    } else {
      glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    }

    if (flags & POOF_WINDOW_SHOWN) {
      glfwWindowHint(GLFW_VISIBLE, GLFW_TRUE);
    } else if (flags & POOF_WINDOW_HIDDEN) {
      glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
    }

    if (flags & POOF_WINDOW_INPUT_FOCUS) {
      glfwWindowHint(GLFW_FOCUS_ON_SHOW, GLFW_TRUE);
    }
     
    if (flags & POOF_WINDOW_MOUSE_FOCUS) {
      glfwWindowHint(GLFW_CENTER_CURSOR, GLFW_TRUE);
    }

    if (flags & POOF_WINDOW_ALWAYS_ON_TOP) {
      glfwWindowHint(GLFW_FLOATING, GLFW_TRUE);
    }

    if (flags & POOF_WINDOW_MAXIMIZED) {
      glfwWindowHint(GLFW_MAXIMIZED, GLFW_TRUE);
    }
    
    window = glfwCreateWindow(ww, wh, title, mon, NULL);
    
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
