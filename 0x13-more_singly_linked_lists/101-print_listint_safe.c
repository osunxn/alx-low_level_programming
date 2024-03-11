#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise = head;
const listint_t *hare = head;
size_t count = 0;

while (tortoise != NULL && hare != NULL && hare->next != NULL)
{
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
tortoise = tortoise->next;
hare = hare->next->next;

if (tortoise == hare)  /* Loop detected */
{
/* Move the tortoise back to the head and find the loop's start */
tortoise = head;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}

/* Print the remaining nodes in the loop */
while (1)
{
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
tortoise = tortoise->next;
count++;

if (tortoise == hare)
break;
}

break; /* End the loop since the list is printed */
}

count++;
}

return (count);
}
