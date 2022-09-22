#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: pointer to the string
 */

char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] >= 65 && s[i] <= 90; i++)
	{
		if (s[i] >= 65 && s[i] <= 77)
			s[i] += 13;
		else
			s[i] -= 13;
	}
	for (j = 0; s[j] >= 97 && s[j] <= 122; j++)
	{
		if (s[j] >= 97 && s[j] <= 109)
			s[j] += 13;
		else
			s[j] -= 13;
	}
	return (s);
}
