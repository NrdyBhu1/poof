#include <stdio.h>
#include <stdlib.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <linmath.h>
#include <POOF/poof_log.h>
#include <POOF/poof_math.h>
#include <POOF/poof_render.h>
#include <POOF/poof_window.h>
#include <POOF/poof_input.h>

#if defined(__cplusplus)
extern "C" {
#endif

extern void poofTerminate();
extern bool poofInit();
extern void poofErrorCallback();

#if defined(__cplusplus)
}
#endif
