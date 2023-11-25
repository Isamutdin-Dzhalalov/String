#include "my_string.h"

char *my_strncat(char *dest, const char *src, size_t n) {
  unsigned char *pdest = (unsigned char*)dest;
  unsigned char *psrc = (unsigned char*)src;
  int lenDest = my_strlen(pdest);
  for(int i = 0; i < n; i++) {
    pdest[lenDest] = *psrc;
    psrc++;
    lenDest++;
  }
}
      
	
