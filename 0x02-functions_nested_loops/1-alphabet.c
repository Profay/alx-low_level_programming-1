#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * print the alphabet, in lowercase, followed by a new line.
 *
 * you can only use _putchar twice in your code
 *
 * Return: always 0.
 * */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	_putchar(10);
}

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
}
