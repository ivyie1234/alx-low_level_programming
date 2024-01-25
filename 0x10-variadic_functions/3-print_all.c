#include "variadic_functions.h"

/**
 * print_all - Prints formatted data based on the format string.
 * @format: Format string containing types of arguments (c, i, f, s).
 *         c: char
 *         i: integer
 *         f: float
 *         s: char * (if the string is NULL, print (nil) instead)
 *         Any other char should be ignored.
 * @...: Variable arguments corresponding to the format.
 */
void print_all(const char * const format, ...)
{
	char c;
	int i = 0;
	/*float f = 0;*/
	char *s = NULL;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];

		switch (c)
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
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		}
		if ((format[i + 1]) && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}
