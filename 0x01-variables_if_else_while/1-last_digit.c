#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the code
 *
 * Description : check the last digit and compare it
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %i is 0 and is 0\n", n, i);
	}
	else if (i < 6 && i != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
