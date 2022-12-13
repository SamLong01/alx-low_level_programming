#include "main.h"

/**
 * _memset -  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the memory area s
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (; i < n; i++)
		s[i] = b;
	return (s);
}
