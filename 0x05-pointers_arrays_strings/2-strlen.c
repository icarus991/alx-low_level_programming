#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: A pointer to the string.
 *
 * Description: This function calculates the length of the string 's' by
 * iterating through the characters until it reaches the null terminator '\0'.
 *
 * Return: The length of the string (number of characters).
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
