#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: pointer to the string
 * @c: the character
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
