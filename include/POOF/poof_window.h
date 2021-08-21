#include <POOF/poof_bool.h>

#ifndef POOF_WINDOW_H_
#define POOF_WINDOW_H_

#if defined(__cplusplus)
extern "C" {
#endif

typedef enum {
    POOF_WINDOW_FULLSCREEN = 0x00000001,
    POOF_WINDOW_SHOWN = 0x00000004,
    POOF_WINDOW_HIDDEN = 0x00000008,
    POOF_WINDOW_FULLSCREEN_DESKTOP = ( POOF_WINDOW_FULLSCREEN | 0x00001000 ),
    POOF_WINDOW_INPUT_FOCUS = 0x00000200,
    POOF_WINDOW_ALWAYS_ON_TOP = 0x00008000,
    POOF_WINDOW_MOUSE_FOCUS = 0x00000400,
    POOF_WINDOW_MAXIMIZED = 0x00000040,
    POOF_WINDOW_RESIZABLE = 0x00000020
} POOF_WindowFlags;

typedef GLFWwindow POOF_Window;

extern POOF_Window* poofCreateWindow(int width, int height, const char* title, uint32_t flags);
extern bool poofWindowShouldClose(POOF_Window* window);
extern void poofPollEvents();
extern void poofSwapBuffers(POOF_Window* buffer);
extern void poofDestroyWindow(POOF_Window* window);

#if defined(__cplusplus)
}
#endif

#endif // POOF_WINDOW_H_
