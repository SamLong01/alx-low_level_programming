#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints single digit numbers
 * in base 10
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
char x = '0';

for (x = '0'; x <= '9'; x++)
putchar(x);
putchar('\n');
return (0);
}
