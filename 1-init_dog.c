#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog -> function that initialize a variable of type struct dog
 * @d: pointer
 * @name: character pointer
 * @age: float pointer
 * @owner: character pointer
 * Return: 0 Always(success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != 0)
	{
		d->(name, age, owner) = (name, age, owner);
	}
}
