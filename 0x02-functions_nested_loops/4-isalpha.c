#include "main.h"
/**
 * main - main function
 * Description: a function that checks for alphabetic character
 * Return: 1 if it is a letter, lowercase or upercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return(0);
}
