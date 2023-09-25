#include "main.h"

/**
 * _memcpy - Copies memory area from src to dest.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}
	return (dest);
}
