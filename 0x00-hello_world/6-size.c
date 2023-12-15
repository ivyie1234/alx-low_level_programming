#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %dByte(s)\n", sizeof(char));
	printf("size of an int: %dByte(s)\n", sizeof(int));
	printf("size of a long int: %dByte(s)\n", sizeof(long int));
	printf("size of a long long int: %dByte(s)\n", sizeof(long long int));
	printf("size of a float: %dByte(s)\n", sizeof(float));
	return (0);
}
