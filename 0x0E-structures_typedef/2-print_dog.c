#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog -> function to print struct dog
 * @d: pointer
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name:");
		d->name == NULL? printf("nil\n"): printf("%s\n", d->name);
		printf("Age:");
		prinf("%f\n", d->age);
		printf("Owner:");
		d->owner == NULL ? printf("nil\n"): printf("%s\n", d->owner);
	}
}
