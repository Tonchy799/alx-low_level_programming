#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to calculate the square root of
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find  the natural square root of a number
 * @n: integer to calculate the square root of
 * @i: iterator
 * Return: the result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i  == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
