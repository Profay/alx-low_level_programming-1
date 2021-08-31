#include "main.h"

/**
 * print_sign - checks for lowercase character.
 *
 * @n: char type letter
 *
 * Return: 1, 0, -1 and prints +, 0, - if n > 0, n ==0, n < 0 respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
