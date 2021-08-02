#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - Inserts a node
 * @head: Double pointer to the head node
 * @number: Number to insert
 * Return: Null if failed - Otherwise pointer to the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *neoNode;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return(add_nodeint_end(head, number));

	current = *head;

	neoNode = malloc(sizeof(listint_t));
	if (neoNode == NULL)
		return (NULL);

	neoNode->n = number;
	neoNode->next = NULL;
	if (number < current->n)
	{
		neoNode->next = current;
		*head = neoNode;
		return(neoNode);
	}

	while (current->next != NULL && current->next->n < neoNode->n)
		current = current->next;

	neoNode->next = current->next;
	current->next = neoNode;

	return (neoNode);

}