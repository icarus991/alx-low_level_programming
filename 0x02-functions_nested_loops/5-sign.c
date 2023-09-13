#include "main.h"

/**
 * print_sign - Checks if n is greater less or equal than 0.
 *
 * @n: takes integer input for function.
 *
 * Return: 1 if more, 0 if equal, - if less.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
