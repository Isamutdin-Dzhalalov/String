#include "my_string.h"

char *my_strchr(const char *str, int c) {
  unsigned char* pstr = (unsigned char*)str;
  int length = my_strlen(pstr);
  for(int i = 0; i < length; i++) {
      if(*pstr == (unsigned char)c) {
          return pstr;
      }  
      pstr++;
    }
  return 0;
}

