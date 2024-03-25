#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: The num of bytes to be allocated
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
