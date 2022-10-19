#include "main.h"
/**
 * print_sign - a function to print the sign of a num
 * @n: a number value
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n < 0)
	{
		_putchar("-");
		return (-1);
	}
	else
	{
		_putchar("0");
		return (0);
	}
}
