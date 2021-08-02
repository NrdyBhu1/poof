#ifndef POOF_RENDER_H_
#define POOF_RENDER_H_

#if defined(__cplusplus)
extern "C" {
#endif

typedef struct {
    GLuint VAO;
    GLuint VBO;
    GLuint IBO;
} POOF_Renderer;
  
extern void poofClearColor(float r, float g, float b, float a);
extern void poofCreateRenderer();
  
#if defined(__cplusplus)
}
#endif

#endif // POOF_RENDER_H_
