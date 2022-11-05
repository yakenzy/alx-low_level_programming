#include "main.h"
/**
 * _strlen - function that returns str length
 * @s: char type pointer
 * Return: length of the string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
