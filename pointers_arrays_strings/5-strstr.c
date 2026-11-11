#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
