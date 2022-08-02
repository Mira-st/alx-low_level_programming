#ifndef DOG_H
#define DOG_H

/**
 * struct -> function to typedef of stuct dog
 * @name: character pointer
 * @age: float pointer
 * @owner: character pointer
 * Return: 0 Always(success)
 */

typedef struct dog 
{
	char *name;
	float *age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
