#include "main.h"
/**
 * rev_string - reverse a string
 * @s: char array type
 */

void rev_string(char *s)
{
	int i, c, l;
	char h;
	
	for (i = 0; s[i] != '\0'; i++)
		;
	
	l = i;
	for (c == 0; c < 1 / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}

