#include "lists.h"
/**
 * check_cycle - A singly linked list has a cycle in it.
 * @list: header pointer
 * Return: 0: the linked list is a circle 1: is not a circle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;
    fast = slow = list;

    if (list->next == list)
		return (1);

	if (list == NULL || list->next == NULL)
		return (0);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow)
			return (1);
	}
	return (0);
}
