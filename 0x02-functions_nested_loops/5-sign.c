#include "main.h"

/**
 * print_sign - checks if n is positive, zero or negative
 * @n: is the int that is used as argument for the function
 * Return: 0 always
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
