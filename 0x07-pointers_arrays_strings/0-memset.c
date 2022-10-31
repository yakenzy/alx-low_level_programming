#include "main.h"
/**
 * _memset - A function that fills a memory with a constant byte
 * @s: char type pointer
 * @b: char type
 * @n: unsigned int type
 * Return: A pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
