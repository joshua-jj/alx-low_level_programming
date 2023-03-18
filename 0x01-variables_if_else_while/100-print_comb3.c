#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9.
 *
 * Return: Always returns 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
			putchar(i);
			putchar(j);
				if (i != 56 || j != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
