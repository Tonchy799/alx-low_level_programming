#include "main.h"

/**
 * isalpha - checks for alphabetic characters.
 * @c: character to be checked.
 * Return: 1 for alphabetic character 0 for anything else.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
