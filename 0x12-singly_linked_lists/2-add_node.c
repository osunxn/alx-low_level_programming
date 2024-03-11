#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the linked list
 *
 * @head: points to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	/*new_value represent the new node to be added*/
	list_t *new_value;
	size_t strlen = 0;

	/*set string length to 0 if its NULL*/
	if (str->next == NULL)
		strlen = 0;

	/*check if srt isn't = null terminator*/
	/*count length of string*/
	while (str[strlen] != '\0')
		strlen++;

	new_value = malloc(sizeof(list_t));
	if (new_value == NULL)
		return (NULL);

	/**
	 * set the next address of new_value
	 * to NULL if head is NULL, if it's not
	 * move the first node to the address of new_value
	 * ->next which add new_value at the beginning
	 *  of the list
	*/
	if (*head->next == NULL)
		new_value->next = NULL;
	else
		new_value->next = *head;

	new_value->str = strdup(str);
	new_value->len = strlen;
	*head = new_value;

	return (*head);
}
