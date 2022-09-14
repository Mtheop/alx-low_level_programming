#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: passed arguments
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
	x = n % 10;
	_putchar(x + '0');

	return (x);
}
