#include "main.h"
/**
 * swap_int - a function taht swaps the values of two int
 * @a: int type
 * @b: int type
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
