#include "main.h"

/**
 * islower - check for lowercase letters.
 * @c: the character to be checked.
 * return: returns 1 for a lower character, 0 for else.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
