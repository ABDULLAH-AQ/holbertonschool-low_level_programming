#include "main.h"
/**
 * _cap_string - capitalizes all words of a string
 * @str: string to be modified
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1 == '{' || str[i - 1] == '}')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
