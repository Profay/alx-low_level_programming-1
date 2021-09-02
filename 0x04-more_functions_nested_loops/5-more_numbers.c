#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, and a new line
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 63; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
	_putchar(10);
}
