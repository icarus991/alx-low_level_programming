#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function prints the characters of the string 'str'
 * followed by a new line character '\n' to the standard output.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
