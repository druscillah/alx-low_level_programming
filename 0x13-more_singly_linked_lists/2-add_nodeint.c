#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds na new node at the beginning of a linked list
 * @head: head of the list
 * @n: integer to add to the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
