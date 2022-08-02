#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog -> function that initialize a variable typeof struct dog
 * @d: pointer
 * @name: character pointer
 * @age: float pointer
 * @owner: character pointer
 * Return: 0 Always(success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age =  age;
		d->owner = owner;
	}
}
