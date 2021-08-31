#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * print the alphabet 10 times, in lowercase, followed by a new line.
 *
 * you can only use _putchar twice in your code
 *
 * Return: always 0;
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0, j = 0;

	while (i < 10)
	{
		while (j < 26)
		{
			_putchar(c + j);
			j++;
		}
		_putchar(10);
		i++;
	}

	return 0;
}

