#include "main.h"
/**
 * _strpbrk - searches for a string for any sets of bytes
 * @s: char type pointer
 * @accept: char type pointer
 * Return: a pointer to byte in 's' or 'NULL' if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{

			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
