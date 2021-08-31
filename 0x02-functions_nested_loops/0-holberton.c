#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Print Holberton, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[] = "Holberton";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar(10);

	return 0;
}
