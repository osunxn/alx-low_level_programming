#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_value, *temp;
size_t length = 0;

/* Set length to 0 if the string is NULL */
if (str == NULL)
length = 0;

/* Count length of the string */
while (str[length] != '\0')
length++;

new_value = malloc(sizeof(list_t));
if (new_value == NULL)
return (NULL);

new_value->str = strdup(str);
new_value->len = length;
new_value->next = NULL;

/* Copy our starting node pointer to temp */
temp = *head;

/* If temp is NULL, place our new_value at the beginning of the list */
/* Else, place our new_value to temp->next, adding it at the end of the list */
if (temp == NULL)
*head = new_value;
else
{
/**
 * We iterate through the list until we reach the last node
 * Then, set the next pointer of the last node to new_value
 * This adds our new_value at the end of the list
 * @null - check if temp is not = to null
 */
while (temp->next != NULL)
temp = temp->next;
temp->next = new_value;
}

return (*head);
}

