#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		_putchar(digit + '0');

	_putchar('\n');
}
