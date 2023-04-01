#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string that should be checked
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
