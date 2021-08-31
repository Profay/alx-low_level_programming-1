#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * function that checks for lowercase
 *
 * Prototype: int _islower(int c);
 *
 * Return 1 if c is lowercase
 *
 * Return 0 otherwise
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
