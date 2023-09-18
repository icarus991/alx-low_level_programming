#include "main.h"

/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: A pointer to the string to be printed.
 *
 * Description: This function prints every other character of the string 'str',
 * starting from the first character, followed by a new line character '\n'.
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
