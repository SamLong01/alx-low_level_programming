#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * and uppercase
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
char alpha = 'a';
char alphabet = 'A';

for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
