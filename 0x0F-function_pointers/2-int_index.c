#include "function_pointers.h"

/**
 * int_index - searches for an integar
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of first element
 * cmp function does not retrun 0, or -1 if no match is found
 * or size is zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
