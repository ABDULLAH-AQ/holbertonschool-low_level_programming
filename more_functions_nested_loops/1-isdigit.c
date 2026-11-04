#include "main.h"

/**
 * _isupper - Checks for an uppercase character
 * @c: The character to check, passed as an int
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
