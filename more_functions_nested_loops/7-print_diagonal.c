#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int line;
	int space;

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
