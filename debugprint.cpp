#include <Arduino.h>
#include <stdio.h>
#include <stdarg.h>
#include "debugprint.h"

long Debug = DEBUG_ERROR | DEBUG_WARN | DEBUG_INFO | DEBUG_TRACE;

void debugprint (long debug_flag, const char *format, ...)
{
  va_list ap;
  char buf[MAX_BUF_LEN];

  va_start(ap, format);

  if ( (Debug & debug_flag) == debug_flag ) {
    vsprintf(buf, format, ap);
    Serial.println(buf);
  }

  va_end(ap);
}

