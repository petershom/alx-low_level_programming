#include <_putchar>
/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}