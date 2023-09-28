#include "main.h"

/**
 * square - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @val: The current value to check for the square root.
 *
 * Return: The square root of n, or -1 if it doesn't exist.
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * _sqrt_recursion - Computes the square root of a number using recursion.
 * @n: The number for which to compute the square root.
 *
 * Return: The square root of n, or -1 if it doesn't exist.
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
