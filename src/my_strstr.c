#include "my_string.h"

char *my_strstr(const char *haystack, const char *needle) {
  unsigned char* pHay = (unsigned char*)haystack;
  unsigned char* pNee = (unsigned char*)needle;
  int lenHay = my_strlen(pHay);
  int lenNee = my_strlen(pNee);
  for(int i = 0; i < lenHay; i++) {
          if(*pHay == *pNee) {
               if(my_memcmp(pHay, pNee, lenNee) == 0) {
                   return pHay;
               }
          }
      pHay++;
  }
  return 0;
}


