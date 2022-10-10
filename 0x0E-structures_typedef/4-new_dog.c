#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	len++;

	return (len);
}

/**
 * _strcopy - copies  string pointed to by src
 * @dest: the buffer storing the string copy
 * @src: the sourcew string
 *
 * Return: pointer to dest
 */


