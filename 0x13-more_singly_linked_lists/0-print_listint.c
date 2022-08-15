#include "list.h"

/**
 * print_listint ->  function that prints all the elements of a list
 * @h: pointer to the element lists
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		printf("%d\n",h->n);
		h = h->next;
		count++;
	}
	return (count);
}
