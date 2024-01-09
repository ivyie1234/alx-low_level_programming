#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area 2
 * @src: memory area 1
 * @n:  bytes to be copied
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
