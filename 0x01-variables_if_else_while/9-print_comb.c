#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9.
 *
 * Return: Always returns 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i < 57) 
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(i);
		}
	}
	return (0);
}
