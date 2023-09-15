#include "main.h"

/**
 * print_line - prints a line of underscores
 * @n: the number of underscores to print
*/

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
			_putchar('_');
		_putchar('\n');
	}
}
