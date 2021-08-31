#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
