#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: number of command line arguments
 * @argv: nuber of command line argument strings
 * Return: 0 or 98
 */
int main(int argc, char *argv[])
{
	char *get_op;
	int num1, num2, ans;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	get_op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || argv[2][1])
			{
		printf("Error\n");
		exit(99);
	}

	if ((get_op == '/' || get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	ans = res(num1, num2);

	printf("%d\n", ans);
	return (0);
	}
