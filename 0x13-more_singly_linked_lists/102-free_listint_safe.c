#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tortoise = *h;
listint_t *hare = *h;
size_t count = 0;

while (tortoise != NULL && hare != NULL && hare->next != NULL)
{
tortoise = tortoise->next;
hare = hare->next->next;

if (tortoise == hare)  /* Loop detected */
{
/* Move the tortoise back to the head and find the loop's start */
tortoise = *h;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}

/* Free the nodes in the loop */
while (1)
{
listint_t *temp = tortoise;
tortoise = tortoise->next;
count++;

if (tortoise == hare)
{
free(temp);
break;
}

free(temp);
}

break; /* End the loop since the list is freed */
}

count++;
}

/* Free the rest of the nodes without loops */
while (*h)
{
listint_t *temp = *h;
*h = (*h)->next;
free(temp);
count++;
}

return (count);
}
