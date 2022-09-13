#include "main.h"

/**
 * _isalpha - checks for all alphabetical letters
 * @c: characters that are checked and verified as character
 * Return: 0 and 1 dependant of output
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
