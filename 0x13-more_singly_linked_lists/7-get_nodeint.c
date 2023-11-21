#include "lists.h"

/**
 * get_nodeint_at_index - retreive node at index
 * @head: pointer to first element
 * @index: index node
 * Return: Pointer to index node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
