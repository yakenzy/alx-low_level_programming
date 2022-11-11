#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * @n: memory size
 * Return: pointer to the new memory space or NULL if the func fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int strlen1, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = (unsigned int)_strlen(s10);
	p = malloc((strlen1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; c = 0; i < (strlen1 + n); i++)
	{
		if (i < strlen1)
			p[i] = s[i];
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';

	return (p);
}
