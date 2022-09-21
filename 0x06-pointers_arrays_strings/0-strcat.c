#include <string.h>
#include "main.h"

/**
 * _strcat -  appends the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the string to be copied
 * Return: pointer to the char with string copied (dest)
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
