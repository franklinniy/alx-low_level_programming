#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This struct is used to store basic information about a dog,
 * including its name, age, and the owner’s name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */

