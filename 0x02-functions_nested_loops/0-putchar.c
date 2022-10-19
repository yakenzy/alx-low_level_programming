#include "main.h"
/**
<<<<<<< HEAD
 * main - main function
 * Description: Print _putchar
 * Return: 0
=======
 *main - main function
 *Description: Print _putchar
 *Return: 0
>>>>>>> 2c1a1c659f152ed210be752191cda323f3508bad
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
