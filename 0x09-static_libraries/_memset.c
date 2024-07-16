#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *ret = s;
	
	while (n--) *s++ = b;
	return (ret);
}

