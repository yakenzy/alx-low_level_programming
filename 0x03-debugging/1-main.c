#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)/* no increment after the loop */
	{/* cause of the error */
		putchar(i);/* error cause */
		break;/* no increment of i after the function */
	} /* no increment as well */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
