#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t list
 * @head: pointer to the pointer of the first node
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return (-1);

listint_t *current = *head;
listint_t *prev = NULL;
unsigned int i;

/*Special case: If the index is 0, delete the first node*/
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

/*Traverse the list to find the node at the specified index*/
for (i = 0; i < index && current != NULL; i++)
{
prev = current;
current = current->next;
}

// If the index is out of range
if (current == NULL)
return (-1);

/*Update the pointers to skip over the node to be deleted*/
prev->next = current->next;

/*Free the memory occupied by the deleted node*/
free(current);

return (1);
}
