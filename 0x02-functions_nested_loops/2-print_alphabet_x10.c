#include "main.h"

/**
 * print_alphabet -> prints lowercase alphabets 10 times
 */
void print_alphabet(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
