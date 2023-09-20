#include "main.h"

/**
 * _strncpy - Copies 'n' bytes from source to destination.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy.
 * Return: A pointer to the destination string 'dest'.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i]

	while (i < n)
	{
		dest[i] = '\0';
		i++
	}
	return (dest);
}
