#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to be transformed
 * Return: transformed string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + i) >= 97 && *(s + i) <= 122)
	{
		*(s + i) = *(s + i) - 32;
	}

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == sep_words[j])
			{
				if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
				{
					*(s + i + 1) = *(s + i + 1) - 32;
				}
			}
		}
	}
	return (s);
}
