#include "main.h"
/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: int type number
 * Return: the natural squareroot
 */

int _sqrt_recursion(int n)
{
	return (calc(n, 1));
}

/**
 * calc - to solve _sqrt_recursion
 * @c: number to determine if it's a square root
 * @i: incrementer ro compare against 'c'
 * Return: square root if natural or -1 if none found
 */

int calc(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (calc(c, i + 1));
	else
		return (-1);
}
