#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @othrn: The divisor to check against.
 * @n: The number to check for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Helper function to check if a number is prime recursively.
 * @n: The number to check for primality.
 * @othrn: The divisor to check against.
 *
 * Return: 1 if n is prime, 0 otherwise.
*/

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
