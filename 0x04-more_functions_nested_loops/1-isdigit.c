#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @c: the digit to check
 * Return: 1 if a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 57)
	{
		return (1);
	}
	return (0);
}
