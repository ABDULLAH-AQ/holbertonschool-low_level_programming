#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: pointer to the array to print
 * @n: number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
