#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	char str[6] = "Error";

	if (argc == 3)
		printf("%i\n", x * y);
	else
	{
		printf("%s\n", str);
		return (1);
	}
	return (0);
}
