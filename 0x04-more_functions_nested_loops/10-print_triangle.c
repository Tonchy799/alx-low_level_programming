#include "main.h"

/**
 * print_triangle - prints a triangle using the character '#'
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
			{
				_putchar(' ');
			}
			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}
		        if (x == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
