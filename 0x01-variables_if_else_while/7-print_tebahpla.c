#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: print numbers in reverse
 * Return: 0
 */

int main(void)

{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet++)
	{
		putchar (alphabet);
	}

	putchar('\n');

	return (0);
}
