#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all base 16 digits in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

