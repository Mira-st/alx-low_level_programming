#include "lists.h"

/**
 * add_nodeint ->  function that adds a new node at the beginning of the list
 * @head: pointer to the pointer of the list
 * @n: data to copy
 * Return: pointer to the element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
