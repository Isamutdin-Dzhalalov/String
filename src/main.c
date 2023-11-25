#include "my_string.h"
#include <stdlib.h>
#include <string.h>

int main() {

  char *strNcpy1 = "Hello ";
  char strNcpy2[100];
  my_strncpy(strNcpy2, strNcpy1, 29); 
  printf("%s\n", strNcpy2);

  return 0;

/*
  //STRNCMP
  char *strNcmp1 = "Hello world";
  char *strNcmp2 = "Hello world";
  int res = my_strncmp(strNcmp1, strNcmp2, 10);
  if(res == 0)
    printf("res == 0");
  else if(res < 0)
    printf("res < 0");
  else
    printf("res > 0");

  return 0;
*/

/*
//STRCHR
  char strChr[] = "HEllo world";
  int c = 5;
  char *chStr = my_strchr(strChr, 'o');
  //char *ch = strchr(strChr, 'o');
  //printf("%c\n", *ch);
  printf("%s\n", chStr);
  
  return 0;
*/

/*
//STRNCAT
  char strNcat[60] = "Hello 111";
  char *strNcat2 = "World   dddd";
  my_strncat(strNcat, strNcat2, 5);
  printf("%s\n", strNcat);

  return 0;
*/

/*
//STRLEN
 char *strLen = "Hello friend 0sfsdafsfd";
 int length = my_strlen(strLen);
 int lenOrig = strlen(strLen);
 printf("%d\n%d", length, lenOrig);

 return 0;
*/

/*
  //MEMSET
	int size = 6;
	char arrChar[size];
	my_memset(arrChar, 'b', sizeof(char) * size);
	printf("%s\n", arrChar);

	return 0;
*/

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
