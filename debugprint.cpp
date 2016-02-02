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

const char *byte_to_binary(uint8_t x)
{
    static char b[9];
    b[0] = '\0';

    int z;
    for (z = 0x80; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}

const char *word_to_binary(uint16_t x)
{
    static char b[17];
    b[0] = '\0';

    int z;
    for (z = 0x8000; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}

