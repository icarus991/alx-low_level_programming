#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: A pointer to the destination string 'dest'.
*/

char *_strcat(char *dest, char *src)
{
	int c, d;

	c = 0;

	while (dest[c])
		c++;

	for (d = 0; src[d]; d++)
		dest[c++] = src[d];

	return (dest);
}
