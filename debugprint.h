#ifndef _debugprint_h_
#define _debugprint_h_

#define MAX_BUF_LEN 64

#define FALSE 0
#define TRUE 1

#define DEBUG_NONE  0x00
#define DEBUG_ERROR 0x01
#define DEBUG_WARN  0x02
#define DEBUG_INFO  0x04
#define DEBUG_TRACE 0x08
#define DEBUG_ALL   0xFF

extern long Debug;

void debugprint (long debug_flag, const char *format, ...);

#endif
