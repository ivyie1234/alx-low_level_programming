#include "main.h"

/**
 * _isupper - checks forupper case letters
 * @c : parameter to be checked
 * Return: return 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
