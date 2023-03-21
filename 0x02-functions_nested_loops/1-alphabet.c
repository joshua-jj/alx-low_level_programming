#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i = 0;
	for (i; i < 26; i++) {
		putchar(i + 97);
	}
	putchar('\n');
}
