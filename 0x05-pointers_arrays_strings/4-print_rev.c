#include "main.h"


/**
 * print_rev - prints a string in reverse
 * @s: string that should be reversed
 * Return: reversed string
 */
void print_rev(char *s)
{
	int i, len;
	
	len = _strlen(s) - 1;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	putchar('\n');
}
