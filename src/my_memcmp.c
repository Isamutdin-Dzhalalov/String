#include "my_string.h"

int my_memcmp(const void *str1, const void *str2, size_t n) {
	unsigned char *pstr1 = (unsigned char*)str1;
	unsigned char *pstr2 = (unsigned char*)str2;

	for(int i = 0; i < n; i++) {
		if(*pstr1 < *pstr2)
			return -1;
		if (*pstr1 > *pstr2)
			return 1;

		pstr1++;
		pstr2++;
		}
		return 0;
}
