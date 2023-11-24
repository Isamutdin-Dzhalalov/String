#ifndef STRING
#define STRING

#include <string.h> //ИЗ БИБЛИОТЕКИ

#include <stdio.h>
#include <stddef.h>

int main();
void *my_memchr(const void *str, int c, size_t n);
int my_memcmp(const void *str1, const void *str2, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n);
void *my_memset(void *str, int c, size_t n);
char *my_strncat(char *dest, const char *src, size_t n);

#endif
