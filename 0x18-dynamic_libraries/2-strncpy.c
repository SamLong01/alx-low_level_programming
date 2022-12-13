#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string src into dest
 * @dest: pointer to the destination string
 * @src: pointer to the string to be copied
 * @n: number of bytes of src to be copied
 * Return: pointer to the char with string copied (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
