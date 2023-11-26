#include "my_string.h"

char *my_strtok(char *str, const char *delim) {
  unsigned char *pDelim = (unsigned char*)delim;
  int len = my_strlen(str);
  for(int i = 0; i < len; i++) {
    if(str[i] == *pDelim) {
      str[i] = '\0';
    } 
  }
  return str;
}

