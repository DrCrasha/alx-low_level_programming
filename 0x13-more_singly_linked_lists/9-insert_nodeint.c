#include "lists.h"

/**
 * create_new_node - creates a new node
 * @n: data of the node
 * Return: pointer of node
 *
 */

listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - insert node at an index
 * @head: pointer to the first element
 * @idx: index position of new node
 * @n: data of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *temp_new;

	temp = *head;
	if (head == NULL)
		return (NULL);
	temp_new = create_new_node(n);
	if (*head == NULL)
	{
		*head = temp_new;
		return (temp_new);
	}

	if (idx == 0)
		*head = temp_new;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		temp_new->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = temp_new;
		temp_new->next = temp_old;
	}
	return (temp_new);
}
