#include "my_string.h"

void *my_memset(void *str, int c, size_t n) {
	unsigned char *pstr = (unsigned char*)str;
	for(int i = 0; i < n; i++) {
		*pstr = (unsigned char)c;
		pstr += 2;
	}
}
