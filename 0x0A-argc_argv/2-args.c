#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints all the arguments it receives
 * @argc: argument number
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;


	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
