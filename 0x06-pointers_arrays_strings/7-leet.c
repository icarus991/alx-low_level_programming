#include "main.h"

/**
 * leet - Encodes a string into "leet" or "1337" speak.
 * @str: A pointer to the string to be encoded.
 *
 * Return: A pointer to the encoded string.
*/

char *leet(char *)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (cp);
}
