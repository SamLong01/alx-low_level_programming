#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: pointer to the string
 */

char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] >= 'A' && s[i] <= 'Z'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'M')
			s[i] += 13;
		else
			s[i] -= 13;
	}
	for (j = 0; s[j] >= 'a' && s[j] <= 'z'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'm')
			s[j] += 13;
		else
			s[j] -= 13;
	}
	return (s);
}
