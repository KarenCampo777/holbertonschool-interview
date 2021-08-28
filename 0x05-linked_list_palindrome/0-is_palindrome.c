#include "lists.h"
#include <stddef.h>

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: pointer
 * return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	int longi = sizeof(head);
	int init = 0;
	int ending = longi -1;

while (head[init] == head[ending])
{
	if (longi == 1)
		return (1);
	else
		return (0);

	init++;
	ending--;
}
return (1);
}
