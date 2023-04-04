#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of alinked list
 * @h: head of the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	while (h != NULL)
	{
		if (h)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		count++;
	}
	return (count);
}
