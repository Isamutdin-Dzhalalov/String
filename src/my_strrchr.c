#include "my_string.h"

char *my_strrchr(const char *str, int c) {
  unsigned char *pstr = (unsigned char*)str;
  int len = my_strlen(str);
  pstr += len-1;

  for(int i = len; i > 0; i--) {
      if(*pstr == (unsigned char)c)
          return pstr;
      pstr--;
  }
  return 0;
}
