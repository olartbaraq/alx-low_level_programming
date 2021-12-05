#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * in a doubly linked list
 * @h: double pointer to the list
 * @idx: index of the node to insert
 * @n: data to insert
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *new;
unsigned int i = 0;
if (!*h)
return (NULL);
if (i > idx)
return (NULL);
new = malloc(sizeof(dlistint_t));
new->n = n;
new->prev = NULL;
new->next = NULL;
temp = *h;
while (i < idx-1)
{
temp = temp->next;
i++;
}
new->next = temp->next;
new->prev = temp;
temp->next = new;
return (new);
}
