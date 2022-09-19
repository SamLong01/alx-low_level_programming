#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	int a;

	for (s = 0; *(str + s) != '\0'; s++)
		_putchar(*(str + s));
	_putchar('\n');
}
