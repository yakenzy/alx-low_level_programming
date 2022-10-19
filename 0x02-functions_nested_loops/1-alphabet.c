#include <main.h>
/**
 * main - main function
 * Description: A function that prints the alphabets in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n);
}
