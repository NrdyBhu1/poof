#ifndef POOF_RENDER_H_
#define POOF_RENDER_H_

#if defined(__cplusplus)
extern "C" {
#endif

typedef struct {
    float r;
    float g;
    float b;
    float a;
} POOF_Color;

typedef struct {
    GLfloat vertices[MAX_VERTICES];
    GLuint indices[MAX_INDICES];
    GLuint vertices_count;
    GLuint VAO;
    GLuint VBO;
    GLuint IBO;
} POOF_Renderer;
  
extern void poofClearColor(float r, float g, float b, float a);
extern POOF_Renderer* poofCreateRenderer();
extern void poofDrawTraingle(POOF_Renderer* renderer, int a, int b, int c, POOF_Color* color);
extern void poofDrawRect(POOF_Renderer* renderer, POOF_Rect* rect, POOF_Color* color);
extern void poofDrawLine(float x1, float y1, float x2, float y2);
extern void poofDrawLineEx(POOF_Point* start, POOF_Point* end);
extern void poofClearRenderer(POOF_Renderer* renderer);
  
#if defined(__cplusplus)
}
#endif

#endif // POOF_RENDER_H_
