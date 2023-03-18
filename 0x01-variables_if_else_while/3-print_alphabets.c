#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	int m = 97, n = 65;

	while (m < 123)
	{
		putchar(m);
		m++;
	}

	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
