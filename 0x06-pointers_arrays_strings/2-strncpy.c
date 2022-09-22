#include "main.h"

/**
 * _strncpy - that copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: copied char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
