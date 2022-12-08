#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: head pointer to the node
 * @n: data to be add
 * Return:  the address of the new element, or NULL if it fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
