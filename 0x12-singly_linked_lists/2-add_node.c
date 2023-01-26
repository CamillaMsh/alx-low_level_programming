#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}

	newNode->len = length;
	if (*head != NULL)
		newNode->next = *head;

	if (*head == NULL)
		newNode->next = NULL;
	*head = newNode;

	return (*head);

}
