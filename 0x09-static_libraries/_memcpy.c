#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;
	while (n--) *dest++ = *src++;
	return (ret);
}

