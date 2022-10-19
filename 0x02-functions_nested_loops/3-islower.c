#include "main.h"
/**
 * _islower - A function that returns 1 if the letter is lowercase, 0 if not
 * @c: char type letter
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
