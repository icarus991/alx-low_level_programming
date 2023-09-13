#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of an integer.
 *
 * @n: The integer from which the last digit is extracted.
 *
 * Return: The last digit of 'n'.
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
