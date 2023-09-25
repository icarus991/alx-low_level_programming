#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing characters to search for.
 *
 * Return: A pointer to the first occurrence
 * in @s of any character in @accept,
 * or NULL if no match is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int str, brk;
	char *p;

	str = 0;
	while (s[str] != '\0')
	{
		brk = 0;
		while (accept[brk] != '\0')
		{
			if (accept[brk] == s[str])
			{
				p = &s[str];
				return (p);
			}
			brk++;
		}
		str++;
	}

	return (0);
}
