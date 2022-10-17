#include <stdio.h>
/**
 * main - The Entry Point
 *Description: a program that prints the alphabet in lowercase, followed by a new line
 *Return: Always (0) Success
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
