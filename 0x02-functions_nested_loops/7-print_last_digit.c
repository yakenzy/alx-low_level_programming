#include "main.h"
/**
 * print_last_digit - a function that print the last digit of a number
 * @n: int type
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -1 * (n % 10);
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
