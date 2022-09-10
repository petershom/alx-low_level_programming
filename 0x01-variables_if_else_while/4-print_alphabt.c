#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: successful
 */
int main()
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
