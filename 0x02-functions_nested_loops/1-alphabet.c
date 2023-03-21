#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 */
void print_alphabet(void)
{
	char letter = 'a';

	for(letter; letter < 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
