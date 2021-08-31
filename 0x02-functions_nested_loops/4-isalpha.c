#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Prototype: int _isalpha(int c);
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 *
 * retrun: 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 123))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
