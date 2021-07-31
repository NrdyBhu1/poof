#ifndef POOF_LOG_H_
#define POOF_LOG_H_

typedef enum {
  LOG_DEBUG = 0x00,
  LOG_WARN,
  LOG_ERROR,
  LOG_FATAL
} POOF_LogLeveL;

void poofLog(POOF_LogLeveL log_level, const char* message);

#endif // POOF_LOG_H_
