#include "main.h"

/**
 * _strcat - appends src string to the dest string
 * @dest: string to be appended to
 * @src: appended string
 * Return: dest after appending
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	while (dest[i])
	{
		i++;
	}
	int j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
