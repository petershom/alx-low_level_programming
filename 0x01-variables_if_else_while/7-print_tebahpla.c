#include <stdio.h>

/**
 * main -  program that prints the
 * lowercase alphabet in reverse, followed by a new line
 *
 * Return: successf
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
