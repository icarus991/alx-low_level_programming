#include "main.h"

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: A pointer to the destination buffer 'dest'.
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
