#include "main.h"
/**
 * print_alphabet_x10 - A function that prints the alphabets 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;
	while (i < 10){
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
