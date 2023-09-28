#include "main.h"

/**
 * _puts_recursion - Prints a string recursively followed by a newline.
 * @s: A pointer to the string to be printed.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
