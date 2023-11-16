#include "lists.h"

/**
 * add_node - add node to the begining of list
 * @head: pointer to the head of the list
 * @str: string
 * Return: pointer to the first node
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
 * len - get lenght of string
 * @str: string
 * Return: lenght of string
 *
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
