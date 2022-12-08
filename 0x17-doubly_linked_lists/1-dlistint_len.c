#include "list.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: head pointer to the node
 * Returns: number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++
	}
	return (num);
}
