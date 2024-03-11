#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new element (new node), or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

/* Create a new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = n;

/*link first node in head with the new_node*/
if (*head == NULL)
new_node->next = NULL;
else
new_node->next = *head;

/* Update the head to point to the new node */
*head = new_node;

return (new_node);
}
