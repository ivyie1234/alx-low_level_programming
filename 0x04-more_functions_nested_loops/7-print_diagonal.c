#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int f, g;

		for (f = 0 ; f < n ; f++)
		{
			for (g = 0 ; g <= f ; g++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
