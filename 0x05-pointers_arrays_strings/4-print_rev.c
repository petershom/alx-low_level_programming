#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - a function that returns the length of a string
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
