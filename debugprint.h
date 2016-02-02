#ifndef _debugprint_h_
#define _debugprint_h_

#define MAX_BUF_LEN 64

#define FALSE 0
#define TRUE 1

#define DEBUG_NONE  0x0000
#define DEBUG_ERROR 0x0001
#define DEBUG_WARN  0x0002
#define DEBUG_INFO  0x0004
#define DEBUG_TRACE 0x0008
#define DEBUG_ALL   0xFFFF

extern long Debug;

extern void debugprint (long debug_flag, const char *format, ...);
extern char *byte_to_binary( uint8_t );
extern char *word_to_binary( uint16_t );

#endif
