#include "main.h"

/**
 * malloc_checked - allocates a memory
 * @b: unsigned int memory size to allocate
 * Return: void pointer to malloc'd memory space
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
