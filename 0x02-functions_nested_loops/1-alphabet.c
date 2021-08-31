#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * print the alphabet, in lowercase, followed by a new line.
 *
 * you can only use _putchar twice in your code
 *
 * Return: no return value.
 * */

void print_alphabet(void)
{
	char c = 'a';
	int i = 0;

	while (i < 26)
	{
		_putchar(c + i);
		i++;
	}
	_putchar(10);
}
