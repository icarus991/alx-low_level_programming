#include "main.h"

/**
 * string_toupper - Convert a string to uppercase.
 * @str: A pointer to the string to be converted.
 *
 * Description: This function converts all lowercase letters in the given
 * string to their corresponding uppercase letters.
 *
 * Return: A pointer to the converted string.
*/

char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
