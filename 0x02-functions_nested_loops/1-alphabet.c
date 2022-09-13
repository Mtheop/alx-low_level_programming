#include "main.h"

/**
 * main - prints alphabets in lowercase
 *
 * Description: Prints all alphabets in lowercse
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}

	_putchar('\n');
}
