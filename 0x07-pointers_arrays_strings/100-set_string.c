#include "main.h"

/**
 * set_string - Sets the value of a pointer to a string.
 * @s: A pointer to a pointer to a string.
 * @to: A pointer to the new string value.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
