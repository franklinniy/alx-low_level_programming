#include <stdio.h>
/**
 * reset_to_98 - updates  the integer it points to  to 98
 *
 * @n: Pointer to an integer
 *
 * @main - Demonstrates the usage of reset_to_98
 *
 * Return: the result is always 0 to show success
*/

void reset_to_98(int *n);
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 *main - Demonstrates the usage of reset_to_98
 *
 * Return: Always 0 (Success) 
 **/
int main(void)
{
	int num = 10;

	printf("Before reset: %d\n", num);
	reset_to_98(&num);
	printf("After reset: %d\n", num);
	return (0);
}
