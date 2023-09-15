#include <stdio.h>

/**
 * _sqrt - Calculates the square root of a number.
 * @x: The number to calculate the square root of.
 *
 * Return: The square root of the input number as a double.
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - Finds and prints the largest prime factor of number.
 * @num: The number to find the largest prime factor of.
*/

void largest_prime_factor(long int num)
{
	int pNUM, larg;

	while (num % 2 == 0)
		num = num / 2;
	for (pNUM = 3; pNUM <= _sqrt(num); pNUM += 2)
	{
		while (num % pNUM == 0)
		{
			num = num / pNUM;
			larg = pNUM;
		}
	}

	if (num > 2)
		larg = num;
	printf("%d\n", larg);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
*/
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
