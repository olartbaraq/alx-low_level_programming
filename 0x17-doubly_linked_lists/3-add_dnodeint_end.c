#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;
temp = *head;
if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
else
while (temp->next)
temp = temp->next;
new->prev = temp;
temp->next = new;
temp = new;
return (new);
}
