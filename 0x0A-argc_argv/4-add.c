#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		for (i = 1; *argv[i] < 48 || *argv[i] > 57; i++)
		{
			printf("Error\n");
			return (1);
		}
	}
	else
		printf("0");

	return (0);
}
