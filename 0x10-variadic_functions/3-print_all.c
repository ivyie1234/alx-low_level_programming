#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * Any other char should be ignored.
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	unsigned int i = 0;

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
		printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
		printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
		printf("%s%f", separator, va_arg(args, double));
		}
		else if (format[i] == 's')
		{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
		str = "(nil)";
		}
		printf("%s%s", separator, str);
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
