#include "lists.h"

/**
 *  print_dlistint - prints all elements of a node
 *  @h: head pointer to the node
 *  Return: elements in the node
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i = 0;
	temp = h;

	while(temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
