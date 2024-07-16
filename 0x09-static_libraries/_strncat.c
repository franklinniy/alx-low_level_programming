#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;
	
	while (*dest) dest++;
	while (n-- && (*dest++ = *src++))
		;
	if (n < 0) *dest = '\0';
	return (ret);
}

