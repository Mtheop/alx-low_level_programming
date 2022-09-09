#include <stdio.h>

/**
 * main - first entry point for program
 *
 * Decription: print all possible combinationsof single digit numbers
 * Return: 0
 */

int main(void)

{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
