#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: int type number
 * @y: int type number
 * Return: the value after raising
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
