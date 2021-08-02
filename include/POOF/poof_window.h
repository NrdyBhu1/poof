#include <POOF/poof_bool.h>

#ifndef POOF_WINDOW_H_
#define POOF_WINDOW_H_

#if defined(__cplusplus)
extern "C" {
#endif

typedef GLFWwindow POOF_Window;

extern POOF_Window* poofCreateWindow(int width, int height, const char* title);
extern bool poofWindowShouldClose(POOF_Window* window);
extern void poofPollEvents();
extern void poofSwapBuffers(POOF_Window* buffer);
extern void poofDestroyWindow(POOF_Window* window);

#if defined(__cplusplus)
}
#endif

#endif // POOF_WINDOW_H_
