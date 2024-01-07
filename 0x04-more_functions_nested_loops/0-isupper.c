#include "main.h"

/**
 * _isupper - checks for uppercase letter.
 * @c: the letter to check for
 * Return: 1 if uppercase, 0 if otherwise.
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
