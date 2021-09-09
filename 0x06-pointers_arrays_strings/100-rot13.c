#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *)
{
	int i = 0;

	while (*[i] != '\0')
	{
		while ((*[i] >= 'a' && *[i] <= 'z') ||
				(*[i] >= 'A' && *[i] <= 'Z'))
		{
			if ((*[i] >= 'a' && *[i] <= 'm') ||
					(*[i] >= 'A' && *[i] <= 'M'))
				*[i] += 13;
			else
				*[i] -= 13;
			i++;
		}
		i++;
	}
	return (*);
}
