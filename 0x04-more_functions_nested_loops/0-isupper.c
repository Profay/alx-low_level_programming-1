#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: int type number
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	char uppercase = 'A';

	while (uppercase <= 'Z')
	{
		if (c == uppercase)
		{
			return (1);
		}
		uppercase++;
	}

	return (0);
}
