//Некорректно работает
#include "my_string.h"

size_t my_strcspn(const char *str1, const char *str2) {
  unsigned char *pstr1 = (unsigned char*)str1;
  unsigned char *pstr2 = (unsigned char*)str2;
  int lengthStr1 = my_strlen(pstr1);
  int lengthStr2 = my_strlen(pstr2);
  for(int i = 0; i < lengthStr1; i++) {
    for(int j = 0; j < lengthStr2; i++) {
          if(*pstr1 == *pstr2) {
            printf("MY\n");
            return i;
          }
          pstr2++;
    }
    pstr1++;
  }
  return 0;
}
  

