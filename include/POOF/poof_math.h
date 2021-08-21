#ifndef POOF_MATH_H_
#define POOF_MATH_H_

typedef struct {
    float x;
    float y;
    float w;
    float h;
} POOF_Rect;

typedef struct {
    float x;
    float y;
} POOF_Point;

#ifndef POOF_BOOL_H_
#define POOF_BOOL_H_

#if defined(__STDC__) && __STDC_VERSION__ >= 199901L
#include <stdbool.h>
#elif !defined(__cplusplus) && !defined(bool)
typedef enum bool { false, true } bool;
#endif

typedef enum {
    POOF_FALSE,
    POOF_TRUE
} POOF_Bool;

#endif // POOF_BOOL_H_

#endif // POOF_MATH_H_
