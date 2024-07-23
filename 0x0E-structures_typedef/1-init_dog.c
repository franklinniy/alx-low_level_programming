#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to a struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes the members of a struct dog
 * with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		fprintf(stderr, "Memory allocation failed for name\n");
		return;
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		fprintf(stderr, "Memory allocation failed for owner\n");
		free(d->name);
		return;
	}
	strcpy(d->owner, owner);
}


