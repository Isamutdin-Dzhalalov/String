#include "my_string.h"

void *my_memchr(const void *str, int c, size_t n) {
	unsigned char *pstr = (unsigned char*)str;
	for(int i = 0; i < n; i++) {
		if(*pstr == (unsigned char)c)
			return pstr;
			pstr++;
	}
	return NULL;

}
