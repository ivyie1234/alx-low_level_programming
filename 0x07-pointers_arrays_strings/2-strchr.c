#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: character
 * Return:  pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
	if (s[index] == c)
		return (s + index);
	}
	return ('\0');
}
