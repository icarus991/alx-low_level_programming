#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to fill.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the filled memory area @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; n > 0; mem++, n--)
	{
		s[mem] = b;
	}

	return (s);
}
