#include "main.h"

/**
 * print_number - Prints an integer to the standard output.
 * @n: The integer to be printed.
 *
 * Description: This function prints an integer 'n' to the standard output.
 * It handles both positive and negative integers.
*/

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
