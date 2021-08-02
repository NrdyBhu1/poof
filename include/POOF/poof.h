#include <stdio.h>
#include <stdlib.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <POOF/poof_bool.h>
#include <POOF/poof_log.h>
#include <POOF/poof_render.h>
#include <POOF/poof_window.h>

#if defined(__cplusplus)
extern "C" {
#endif

extern void poofTerminate();
extern bool poofInit();
extern void poofErrorCallback();

#if defined(__cplusplus)
}
#endif
