#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - returns the length of a string
 *@s: The string to print
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	c--;
	for (c = 1; c >= 0; c--)
	{
		 _putchar(s[c]);
	}
	_putchar('\n');
}
