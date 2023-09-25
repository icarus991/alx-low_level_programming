#include "main.h"

/**
 * _strspn - Calculates the length of the initial
 * segment of @s that consists
 * entirely of characters from @accept.
 * @s: A pointer to the string to be scanned.
 * @accept: A pointer to the string containing characters to match.
 *
 * Return: The number of characters in the initial
 * segment of @s that match
 * any character in @accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str, spn;

	for (str = 0; s[str] != '\0'; str++)
	{
		for (spn = 0; accept[spn] != s[str]; spn++)
		{
			if (accept[spn] == '\0')
				return (str);
		}
	}
	return (str);
}
