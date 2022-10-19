#include "main.h"
/**
 * print_alphabet - A function that prints the alphabets in lower case
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
