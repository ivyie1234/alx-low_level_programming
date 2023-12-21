#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if ((x == '2') || (x == '4'))
		{
			continue;
		}
		else
		{
			_putchar (x);
		}
	}
	_putchar ('\n');
}
