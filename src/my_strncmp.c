#include "my_string.h"

int my_strncmp(const char *str1, const char *str2, size_t n) {
  unsigned char* pstr1 = (unsigned char*)str1;
  unsigned char* pstr2 = (unsigned char*)str2;
  int flag = 0; 
  for(int i = 0; i < n; i++) {
      if(*pstr1 < *pstr2)
        flag = -1;
        break;
      if(*pstr1 > *pstr2)
        flag = 1;
        break;
      pstr1++;
      pstr2++;
 }

  return flag;
}


