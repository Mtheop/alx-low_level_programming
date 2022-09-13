#include "main.h"

/**
 * _abs -> returns the absolute value of a number
 * @n: the parameter
 * Return: the absolute value of a number
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
