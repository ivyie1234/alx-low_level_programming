#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: dog to be initialized
 * @age: age of the dog
 * @owner: owner of the dog
 * @name: name of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
