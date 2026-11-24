#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments to be printed
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		}
		}
		if (format[i + 1] &&
		    (format[i + 1] == 'c' || format[i + 1] == 'i' ||
		     format[i + 1] == 'f' || format[i + 1] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
