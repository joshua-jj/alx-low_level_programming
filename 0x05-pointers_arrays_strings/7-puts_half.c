#include "main.h"

/**
 * puts_half-  prints the second half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = i / 2 + 1;
	}

	i++;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
}
