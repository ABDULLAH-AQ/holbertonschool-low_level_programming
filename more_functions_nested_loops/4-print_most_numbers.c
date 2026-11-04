#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		if (digit != 2 && digit != 4)
			_putchar(digit + '0');
	}

	_putchar('\n');
}
