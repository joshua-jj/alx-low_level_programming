#include "main.h"

/**
 * _isdigit - check if input is a digit.
 * @c: input.
 * Return: 1 if input is a digit, otherwise  0.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
