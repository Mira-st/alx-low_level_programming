#include "main.h"
/**
 * _strlen -> function to get the length of a string
 * @s: string pointer to passed to this function
 * Return: returns l
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
