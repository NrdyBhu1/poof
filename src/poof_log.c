#include <stdio.h>
#include <stdlib.h>
#include <POOF/poof_log.h>

void poofLog(POOF_LogLeveL log_level, const char* message) {
    switch (log_level) {
      case LOG_WARN: {
        printf("\x1b[1m\x1b[1;33mWARN: ");
        printf("%s", message);
        printf("\x1b[0m \n");
                     } break;
      case LOG_DEBUG: {
        printf("\x1b[32mDEBUG: ");
        printf("%s", message);
        printf("\x1b[0m \n");
                      } break;
      case LOG_FATAL: {
        printf("\x1b[47m\x1b[31m\x1b[2m\x1b[4mFATAL ERROR: ");
        printf("%s", message);
        printf("\x1b[0m \n");
                      } break;
      case LOG_ERROR: {
        printf("\x1b[1;31m\x1b[1m\x1b[1mERROR: ");
        printf("%s", message);
        printf("\x1b[0m \n");
                      } break;
      default: {
        printf("%s\n", message);
               } break;
    }
}
