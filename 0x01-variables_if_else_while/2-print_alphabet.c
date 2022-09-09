#include <stdio.h>

/**
 * main - Main entry point
 *
 * Description: prints alphabets in lowercase
 * Return: 0
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
