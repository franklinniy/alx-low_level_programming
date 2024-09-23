#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 *
 * @c: the character to print
 *
 * return: on success, the character written as an unsigned char cast to an int
 * on failure, return EOF.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
