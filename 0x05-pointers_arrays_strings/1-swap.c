#include "main.h"

/**
 * swap_int: swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * The function takes two values and swap them. This is done using pointers
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
