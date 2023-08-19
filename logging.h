#ifndef KTOOLS_LOGGING_H
#define KTOOLS_LOGGING_H

#include <stdio.h>

#define DEBUG_LOG 0
#define FINE_LOG 1
#define INFO_LOG 2
#define WARNING_LOG 3
#define ERROR_LOG 4

void set_logging_output(int log_level, FILE* stream);
void printlog(char* message, int log_level);
#endif