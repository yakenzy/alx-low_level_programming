#include "main.h"
/**
 * main - main function
 * Description: Print _putchar
 * Return: 0
 *main - main function
 *Description: Print _putchar
 *Return: 0
*/
int main(void)
{
	char _putchar[] = "_putchar";
	int i = 0;

	while (_putchar[i] != '\0')
	{
		_putchar(_putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
