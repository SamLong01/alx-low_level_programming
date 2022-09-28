#include "main.h"

/**
 * sqrt_check - checks if i is a natural square root of a
 * @i: square root parameter
 * @a: number parameter
 * Return: -1 or the natural square root of a
 */

int sqrt_check(int i, int a)
{
	if (i * i == a)
		return (i);
	if (i * i > a)
		return (sqrt_check((i + 1), a));

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number parameter
 * Return:
 *		-1 if n does not have a natural square root
 *		the natural square root of n otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_check(1, n));
}
