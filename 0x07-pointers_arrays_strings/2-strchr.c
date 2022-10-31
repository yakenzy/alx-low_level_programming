#include "main.h"
/**
 * _strchr - A function that locates a string
 * @s: A char type pointer
 * @c: char type
 * Return: A pointer to 'c' or 'NULL'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
