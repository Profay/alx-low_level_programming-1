#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	i = 26;
	c = 'z';
	while (i > 0)
	{
		putchar(c - i);
		i++;
	}
	putchar(10);
	return (0);
}
