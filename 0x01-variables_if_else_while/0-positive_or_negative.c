#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - positive_or_negative number
 *
 * Description:  assign a random number to the variable n
 * Return: value 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positve\n" n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n" n);
	}
	else 
	{
		printf("%d is negative\n" n);
	}

	return (0);
}
