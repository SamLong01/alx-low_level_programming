#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
char alpha = 'a';

for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
