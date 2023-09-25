#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: A pointer to the string to be searched.
 * @needle: A pointer to the substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring
 * @needle in the string @haystack, or NULL if the substring
 * is not found.
 */

char *_strstr(char *haystack, char *needle)
{
int str, ste;

for (str = 0; haystack[str] > '\0'; str++)
{
	for (ste = str; haystack[ste] > '\0' && needle[ste - str] > '\0'; ste++)
	{
		if (haystack[ste] != needle[ste - str])
		{
			break;
		}
	}
	if (needle[ste - str] == '\0')
	{
		return (haystack + str);
	}
}
	return (0);
}
