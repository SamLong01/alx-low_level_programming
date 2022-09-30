#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the file name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
        printf("argc = %d\n", argc);
        printf("%s\n", argv[0]);
        return (0);
}
