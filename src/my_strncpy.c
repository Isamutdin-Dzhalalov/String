#include "my_string.h"

char *my_strncpy(char *dest, const char *src, size_t n) {
//  unsigned char *pdest = (unsigned char*)dest;
  unsigned char *psrc = (unsigned char*)src;
  for(int i = 0; i < n; i++) {
    *dest = *psrc;
    dest++;
    psrc++;   
  }
}
