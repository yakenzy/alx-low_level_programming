#include "main.h"
/**
 * _strcmp - string comparator function
 * @s1: char string pointer
 * @s2: char string pointer
 * Return: negative int if s1 , s2, 0 if matching, and positive int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	}
	return (0);
}
