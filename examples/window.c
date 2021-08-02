#include <POOF/poof.h>

int main() {
    if (!poofInit())
      return -1;

    POOF_Window* win = poofCreateWindow(600, 500, "Hello, World!");
    
    while (!poofWindowShouldClose(win)) {
        poofPollEvents();
        poofClearColor(0.5f, 0.5f, 0.5f, 1.0f);
        poofSwapBuffers(win);
    }
    
    poofDestroyWindow(win);
    poofTerminate();
    return 0;
}
