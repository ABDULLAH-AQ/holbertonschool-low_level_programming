#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to scan
 * @accept: the bytes allowed in the prefix
 *
 * Return: number of bytes in the initial segment of s
 * made only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				break;
		}
		if (accept[i] == '\0')
			return (count);
		count++;
		s++;
	}
	return (count);
}
