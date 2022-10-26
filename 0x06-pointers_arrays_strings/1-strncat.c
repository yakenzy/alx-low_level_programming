#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: char type string pointer
 * @src: char type string pointer
 * @n: int type
 * Return: A pointer to the string 'Dest'
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
