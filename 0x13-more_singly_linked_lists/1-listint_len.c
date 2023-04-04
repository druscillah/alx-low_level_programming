#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the umber of elements in a linked list
 * @h: head of the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
