#include "main.h"

/**
 * _strcat - links the strings pointed to by src
 * @dest: string to be linked to
 * @src: string to be liked upon
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0;
	src[index]; index++)

		dest[dest_len++] = src[index];

	return (dest);
}
