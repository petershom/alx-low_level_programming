#include <stdio.h>

/**
 * main -  program that prints all single
 * digit numbers of base 10 starting from 0
 *
 * Return: successf
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\nn");

	return (0);
}
