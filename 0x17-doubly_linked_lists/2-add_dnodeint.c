#include "lists.h"
/**
 * *add_dnodeint - Adds a new node at the beginning of a list
 * @head: head pointer to the node
 * @n: data to be add
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	head->prev = newnode;
	newnode->next = head;
	head = newnode;

	return (newnode);
}
