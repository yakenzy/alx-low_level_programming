#include "main.h"
/**
 *main - main function
 *Description: Print _putchar
 *Return: 0
*/
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
