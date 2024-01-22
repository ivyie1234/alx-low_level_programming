#ifndef DOG_H
#define DOG_H

#include<stdio.h>
#include<stdlib.h>

/**
 * struct dog - a new way of describing a dog in c
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the struct dog
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
