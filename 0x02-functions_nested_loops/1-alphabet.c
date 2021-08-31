#include "main.h"

/**
 * main - check the code for ALX School students.
 *
 * Function that prints the alphabet, followed by a new line.
 *
 * Prototype: void print_alphabet(void);
 *
 * You can only use _putchar twice in your code
 *
 */

void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar(10);
}
