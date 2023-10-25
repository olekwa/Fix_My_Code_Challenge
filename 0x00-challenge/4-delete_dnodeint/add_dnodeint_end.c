#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint_end - This will add a node at the end of a list
 *
 * @head: This is thse address of the pointer to the first element of the list
 * @n: This is the number to be stored in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *l;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = new;
	new->prev = l;
	return (new);
}
