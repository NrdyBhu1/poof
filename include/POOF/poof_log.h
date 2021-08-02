#ifndef POOF_LOG_H_
#define POOF_LOG_H_

#if defined(__cplusplus)
extern "C" {
#endif

typedef enum {
  LOG_DEBUG = 0x00,
  LOG_WARN,
  LOG_ERROR,
  LOG_FATAL
} POOF_LogLeveL;

extern void poofLog(POOF_LogLeveL log_level, const char* message);

#if defined(__cplusplus)
}
#endif

#endif // POOF_LOG_H_
