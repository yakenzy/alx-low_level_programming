#include "main.h"
/**
 * main - main function
 * Descrition: A function that checks for lowercase
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
