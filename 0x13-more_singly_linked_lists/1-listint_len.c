#include "list.h"

/**
 * listint_len -> function that returns the number of elements in a linked 
 * @h: pointer to the node
 * Return:always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while( h != NULL)
	{
		h = h->next;

		count++;
	}
	return (count);
}
