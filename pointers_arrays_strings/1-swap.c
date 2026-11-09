#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first int
 * @b: pointer to the second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
