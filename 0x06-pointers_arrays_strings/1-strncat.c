#include "main.h"

/**
 * _strncat - appends src to dest
 * @dest: string to be appended to
 * @src: appended string
 * @n: maximum number of byh=tes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (*(src + j))
	{
		if (j == n)
			break;
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
