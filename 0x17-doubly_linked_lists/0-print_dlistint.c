#include "lists.h"

/**
 *  print_dlistint - prints all elements of a node
 *  @h: head pointer to the node
 *  Return: elements in the node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
