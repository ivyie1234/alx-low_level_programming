#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r = 0;
	unsigned long int a = n ^ m;

	while (a > 0)
	{
		r += a & 1;
		a >>= 1;
	}

	return (r);
}

