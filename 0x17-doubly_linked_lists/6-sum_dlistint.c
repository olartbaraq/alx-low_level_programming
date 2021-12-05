#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a doubly linked list
 * @head: pointer to the list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp;
if (head == NULL)
return (0);
else
{
temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
}
return (sum);
}
