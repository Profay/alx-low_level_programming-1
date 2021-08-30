#include <holberton.h> 

/**
 * main - check the code for ALX School students. 
 *
 * Return: Always 0.
 */

int main(void)
{
	char s[] = "Holberton";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(48);
	return 0;
}
