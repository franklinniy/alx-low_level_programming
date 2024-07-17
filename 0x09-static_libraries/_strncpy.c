#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	char *ret = dest;
	
	while (n-- && (*dest++ = *src++))
		;
	if (n >= 0) while (n--) *dest++ = '\0';
	return (ret);
}

