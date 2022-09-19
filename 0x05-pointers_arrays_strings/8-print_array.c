#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 *@a: array of integers
 *@n: Number of elements of the array to be printed
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int 'inc';

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			 printf("%d", a[inc]);
	}
	putchar(10);
}
