#include "lists.h"

/**
 * sum_listint - returns the sum of all data
 * @head: head of a list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
