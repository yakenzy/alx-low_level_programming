#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: char type pointer
 * @src: char type pointer
 * @n: unsigned int type
 * Return: A pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *crat;

	crat = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (crat);
}
