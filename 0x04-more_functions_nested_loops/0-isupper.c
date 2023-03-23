#include "main.h"

/**
 * _isupper - check if input is in upper case.
 * @c: input to be checked
 * Return: 1 if input is in uppercase, otherwise  0.
 */
int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z') {
    return (1);
  }
  return (0);
}
