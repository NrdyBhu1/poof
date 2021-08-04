#ifndef POOF_INPUT_H_
#define POOF_INPUT_H_

#if defined(__cplusplus)
extern "C" {
#endif

typedef enum {
    POOF_KEY_UNKNOWN = -1,
    POOF_KEY_SPACE = 32,
    POOF_KEY_APOSTROPHE = 39 /* ' */,
    POOF_KEY_COMMA = 44 /* , */,
    POOF_KEY_MINUS = 45 /* - */,
    POOF_KEY_PERIOD = 46 /* . */,
    POOF_KEY_SLASH = 47 /* / */,
    POOF_KEY_0 = 48,
    POOF_KEY_1 = 49,
    POOF_KEY_2 = 50,
    POOF_KEY_3 = 51,
    POOF_KEY_4 = 52,
    POOF_KEY_5 = 53,
    POOF_KEY_6 = 54,
    POOF_KEY_7 = 55,
    POOF_KEY_8 = 56,
    POOF_KEY_9 = 57,
    POOF_KEY_SEMICOLON = 59 /* ; */,
    POOF_KEY_EQUAL = 61 /* = */,
    POOF_KEY_A = 65,
    POOF_KEY_B = 66,
    POOF_KEY_C = 67,
    POOF_KEY_D = 68,
    POOF_KEY_E = 69,
    POOF_KEY_F = 70,
    POOF_KEY_G = 71,
    POOF_KEY_H = 72,
    POOF_KEY_I = 73,
    POOF_KEY_J = 74,
    POOF_KEY_K = 75,
    POOF_KEY_L = 76,
    POOF_KEY_M = 77,
    POOF_KEY_N = 78,
    POOF_KEY_O = 79,
    POOF_KEY_P = 80,
    POOF_KEY_Q = 81,
    POOF_KEY_R = 82,
    POOF_KEY_S = 83,
    POOF_KEY_T = 84,
    POOF_KEY_U = 85,
    POOF_KEY_V = 86,
    POOF_KEY_W = 87,
    POOF_KEY_X = 88,
    POOF_KEY_Y = 89,
    POOF_KEY_Z = 90,
    POOF_KEY_LEFT_BRACKET = 91, /* [ ,*/
    POOF_KEY_BACKSLASH = 92, /* \ */
    POOF_KEY_RIGHT_BRACKET = 93, /* ], */
    POOF_KEY_GRAVE_ACCENT = 96, /* ` ,*/
    POOF_KEY_WORLD_1 = 161, /* non-US, #1 */
    POOF_KEY_WORLD_2 = 162, /* non-US, #2 */
    POOF_KEY_ESCAPE = 256,
    POOF_KEY_ENTER = 257,
    POOF_KEY_TAB = 258,
    POOF_KEY_BACKSPACE = 259,
    POOF_KEY_INSERT = 260,
    POOF_KEY_DELETE = 261,
    POOF_KEY_RIGHT = 262,
    POOF_KEY_LEFT = 263,
    POOF_KEY_DOWN = 264,
    POOF_KEY_UP = 265,
    POOF_KEY_PAGE_UP = 266,
    POOF_KEY_PAGE_DOWN = 267,
    POOF_KEY_HOME = 268,
    POOF_KEY_END = 269,
    POOF_KEY_CAPS_LOCK = 280,
    POOF_KEY_SCROLL_LOCK = 281,
    POOF_KEY_NUM_LOCK = 282,
    POOF_KEY_PRINT_SCREEN = 283,
    POOF_KEY_PAUSE = 284,
    POOF_KEY_F1 = 290,
    POOF_KEY_F2 = 291,
    POOF_KEY_F3 = 292,
    POOF_KEY_F4 = 293,
    POOF_KEY_F5 = 294,
    POOF_KEY_F6 = 295,
    POOF_KEY_F7 = 296,
    POOF_KEY_F8 = 297,
    POOF_KEY_F9 = 298,
    POOF_KEY_F10 = 299,
    POOF_KEY_F11 = 300,
    POOF_KEY_F12 = 301,
    POOF_KEY_F13 = 302,
    POOF_KEY_F14 = 303,
    POOF_KEY_F15 = 304,
    POOF_KEY_F16 = 305,
    POOF_KEY_F17 = 306,
    POOF_KEY_F18 = 307,
    POOF_KEY_F19 = 308,
    POOF_KEY_F20 = 309,
    POOF_KEY_F21 = 310,
    POOF_KEY_F22 = 311,
    POOF_KEY_F23 = 312,
    POOF_KEY_F24 = 313,
    POOF_KEY_F25 = 314,
    POOF_KEY_KP_0 = 320,
    POOF_KEY_KP_1 = 321,
    POOF_KEY_KP_2 = 322,
    POOF_KEY_KP_3 = 323,
    POOF_KEY_KP_4 = 324,
    POOF_KEY_KP_5 = 325,
    POOF_KEY_KP_6 = 326,
    POOF_KEY_KP_7 = 327,
    POOF_KEY_KP_8 = 328,
    POOF_KEY_KP_9 = 329,
    POOF_KEY_KP_DECIMAL = 330,
    POOF_KEY_KP_DIVIDE = 331,
    POOF_KEY_KP_MULTIPLY = 332,
    POOF_KEY_KP_SUBTRACT = 333,
    POOF_KEY_KP_ADD = 334,
    POOF_KEY_KP_ENTER = 335,
    POOF_KEY_KP_EQUAL = 336,
    POOF_KEY_LEFT_SHIFT = 340,
    POOF_KEY_LEFT_CONTROL = 341,
    POOF_KEY_LEFT_ALT = 342,
    POOF_KEY_LEFT_SUPER = 343,
    POOF_KEY_RIGHT_SHIFT = 344,
    POOF_KEY_RIGHT_CONTROL = 345,
    POOF_KEY_RIGHT_ALT = 346,
    POOF_KEY_RIGHT_SUPER = 347,
    POOF_KEY_MENU = 348,
    POOF_KEY_LAST = POOF_KEY_MENU,
} KeyCode;

typedef enum {
    POOF_MOD_SHIFT      = 0x0001,
    POOF_MOD_CONTROL    = 0x0002,
    POOF_MOD_ALT        = 0x0004,
    POOF_MOD_SUPER      = 0x0008,
    POOF_MOD_CAPS_LOCK  = 0x0010,
    POOF_MOD_NUM_LOCK   = 0x0020
} Mods;


extern bool poofKeyIsDown(int Key);
extern bool poofKeyIsUp(int key);

#if defined(__cplusplus)
}
#endif


#endif // POOF_INPUT_H_
