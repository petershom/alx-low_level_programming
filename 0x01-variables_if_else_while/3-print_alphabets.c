#include <stdio.h>

/**
 * main - this prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: successul
 */

int main(void)
{
	char alphabet;

	/*prnt lowercase*/

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	/*print uppercase*/

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
