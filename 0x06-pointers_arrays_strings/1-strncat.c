#include "main.h"

/**
 * _strncat - Concatenates two strings, limiting the copy to 'n' bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to append from 'src'.
 * Return: A pointer to the destination string 'dest'.
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = 0;

	while(desk[c])
		c++;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[c + d] = src[d];

	dest[c + d] = '\0';

	return (dest);
}
