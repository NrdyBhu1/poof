#include <stdlib.h>
#include <stdio.h>
#include <POOF/poof.h>

int main() {
    poofLog(LOG_DEBUG, "Debug Message");
    poofLog(LOG_WARN, "Warning Message");
    poofLog(LOG_ERROR, "Error Message");
    poofLog(LOG_FATAL, "Fatal Message");
    return 0;
}
