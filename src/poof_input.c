#include <POOF/poof.h>

bool poofKeyIsDown(int Key) {
    POOF_Window* win = glfwGetCurrentContext();
    return glfwGetKey(win, Key) == GLFW_PRESS;
}

bool poofKeyIsUp(int Key) {
    POOF_Window* win = glfwGetCurrentContext();
    return glfwGetKey(win, Key) == GLFW_RELEASE;
}
