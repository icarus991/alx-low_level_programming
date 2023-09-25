#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: A pointer to the string to search.
 * @c: The character to search for.
 *
 * Return: A pointer to the first occurrence of the character @c in the
 *         string @s, or NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	int str;

	for (str = 0; s[str] >= '\0' ; str++)
	{
		if (s[str] == c)
		{
			return (s + str);
		}
	}

	return ('\0');
}
