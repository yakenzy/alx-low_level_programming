#include "main.h"
/**
 * _isupper - function that checks for uppercase
 * @c: char type
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
