#include "my_string.h"

void *my_memcpy(void *dest, const void *src, size_t n) {
	unsigned char *pdest = (unsigned char*)dest;
	unsigned char *psrc = (unsigned char*)src;
	for(int i = 0; i < n; i++) {
		*pdest = *psrc;
		pdest++;
		psrc++;
	}
	return 0;
}
