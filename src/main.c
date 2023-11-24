#include "my_string.h"
#include <stdlib.h>

int main() {
	int size = 6;
	char arrChar[size];
	my_memset(arrChar, 'b', sizeof(char) * size);
	printf("%s\n", arrChar);

	return 0;


/*
//MEMCPY
	char *strcpy = "wodfsdfsdfsdfrld qwerttyuuioy";
	char *copystr = malloc(strlen(strcpy) * sizeof(int));
	my_memcpy(copystr, strcpy, strlen(strcpy));
	printf("%s\n", copystr);
	
	return 0;
*/

/*
//MEMCMP
	char *str1 = "Hello";
	char *str2 = "HelLo";
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int length;
	length = (len1 <= len2) ? len1 : len2;
	int result = my_memcmp(str1, str2, length);

	if(result == 1)
		printf("f0\n");
	else if(result < 1)
		printf("f-1\n");
	else
		printf("f1\n");
	return 0;
*/

/*
//MEMCHR
	char *str = "asdfgh";
	int c = 5;
	size_t n = 4;
	int *p = my_memchr(str, 'd', n);
	if(p == NULL)
		printf("Not symbol\n");
	else
		printf("%c", *p);

	return 0;
*/
}
