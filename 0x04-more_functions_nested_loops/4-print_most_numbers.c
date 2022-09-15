#include "holberton.h"

/**
 * main - a function that prints the numbers,
 *from 0 to 9, followed by a new line
 *
 * Return: 0
 */

void print_most_numbers(void);

main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar("%d", i);
	}
	_putchar('\n');
}
