#include "my_string.h"

size_t my_strlen(const char *str) {
    unsigned char* pstr = (unsigned char*)str;
    int length = 0;
    while(*pstr != 0) {
      length++;
      pstr++;
    }
    return length;
}
        
