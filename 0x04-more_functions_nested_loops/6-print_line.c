#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: the number of times '_' should be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		_putchar('_');
	}
	_putchar('\n');
}
