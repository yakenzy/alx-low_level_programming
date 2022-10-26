#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: char type string pointer
 * @src: char type string pointer
 * Return: Pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
