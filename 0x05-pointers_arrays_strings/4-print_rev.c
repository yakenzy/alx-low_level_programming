#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: char type pointer
 */
void print_rev(char *s)
{
	int i;

	for (s[i] = '\0'; i = 0, i--)
	{
		_putchar(s[i]);
		_putchar('\n');
	}
}
