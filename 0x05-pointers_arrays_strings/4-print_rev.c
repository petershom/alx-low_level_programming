#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - a function that returns the length of a string
 *@s: The string to print
 *
 * Return: Always 0
 */

void print_rev(char *s):
{
        int len = strlen(s)

        while(len--)
		putchar(*(s + len));
	putchar(10);
}
