#include "main.h"

/**
 * more_numbers - prints 0 - 14 10 times
 */
void more_numbers(void)
{

	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			c = j;
			if (j >= 10)
			{
				c = j % 10;
				_putchar('1');
			}
			_putchar(c + 48);
		}
		_putchar('\n');
	}
}
