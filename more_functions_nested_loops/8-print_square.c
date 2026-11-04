#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 * @size: The size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
