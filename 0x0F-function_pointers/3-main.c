#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: number of command line arguments
 * @argv: nuber of command line argument strings
 * Return: 0 or 98
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);

	printf("%d\n", operation(num1, num2));

	return (0);
}
