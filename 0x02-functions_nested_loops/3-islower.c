#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * int c - parameter to the custom function
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
