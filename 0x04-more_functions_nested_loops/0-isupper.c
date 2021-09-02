#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: int type number
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char c = 'A';

	while (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
