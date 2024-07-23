#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of these elements is NULL, it prints (nil) instead. If d is NULL,
 * it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

