#include <string.h>
#include "main.h"

/**
 * _strncat - appends the src string to the dest string
 * using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the string to be copied
 * @n: number of bytes to be copied from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
