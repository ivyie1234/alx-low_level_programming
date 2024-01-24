#include "function_pointers.h"

/**
 * print_name - it prints a name
 * @name: name of the person
 * @f: pointer that takes charbparameter
 */
void print_name(char *name, void (*f)(char *))
{
	while (name == NULL || f == NULL)
		return;
	f(name);
}
