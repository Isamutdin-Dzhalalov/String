#include "my_string.h"

char *my_strpbrk(const char *str1, const char *str2) {
  unsigned char* pstr1 = (unsigned char*)str1;
  unsigned char* pstr2 = (unsigned char*)str2;
  int lenStr1 = my_strlen(pstr1);
  int lenStr2 = my_strlen(pstr2);
  for(int i = 0; i < lenStr1; i++) {
    for(int j = 0; j < lenStr2; j++) {
      if(*pstr1 == *pstr2) {
        return pstr1;
      } 
      pstr1++;
    }
      pstr2++;
  }
  return 0;
}
