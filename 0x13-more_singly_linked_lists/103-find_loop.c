#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise = head;
listint_t *hare = head;

while (tortoise != NULL && hare != NULL && hare->next != NULL)
{
tortoise = tortoise->next;
hare = hare->next->next;

if (tortoise == hare) /* Loop detected */
{
/* Move the tortoise back to the head and find the loop's start */
tortoise = head;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}

return (tortoise); /* Return the node where the loop starts */
}
}

return (NULL); /* No loop found */
}
