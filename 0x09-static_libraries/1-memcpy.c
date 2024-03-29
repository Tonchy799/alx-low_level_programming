#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where it's stored
 * @src: memory where it's copied
 * @n: number of bytes
 *Return: copied memory with bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
