#include "main.h"

/**
 *_puts - prints a string, followed by a new line, to stdout
 *@str: string input
 * Return: Always 0
 */

void _puts(char *str)
{
        int i = 0;

        while(*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
