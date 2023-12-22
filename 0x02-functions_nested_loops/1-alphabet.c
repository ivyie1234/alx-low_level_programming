#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase 10 times
 * Description : prints lowercase
 * Return : returns 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
