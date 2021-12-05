#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to the list
 * @index: index of the node to return
 *
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp;
temp = head;
if (!head)
return (NULL);
if (!index)
return NULL;
while ( head && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
