#include "main.h"

/**
 * main - function that prints a string, followed by a new line, to stdout
 *
 * Return: Always 0
 */

void _puts(char *str);
{
        int i = 0;

        while(*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(1o);
}
