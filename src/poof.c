#include <POOF/poof.h>

void poofErrorCallback(int error, const char* description) {
    fprintf(stderr, "Error: %s\n", description);
}

void poofTerminate() {
    glfwTerminate();
}

bool poofInit() {
    bool init = glfwInit();
    glfwSetErrorCallback(poofErrorCallback);
    return init;
}
