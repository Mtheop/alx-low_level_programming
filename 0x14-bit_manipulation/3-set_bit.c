#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: a pointer to the bit
 * @index: the index to set the value at - indices start at 0
 *
 * Return: if an error occurs - -1
 * oterwise - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
			return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
