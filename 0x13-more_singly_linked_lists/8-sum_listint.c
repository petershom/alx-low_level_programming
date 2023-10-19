#include "lists.h"

/**
 * sum_listint - returns the sum of all data n
 * @head: head of a list
 * Return: sum of all the data
 **/
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
