#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written (1)
 *  On error, returns -1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
