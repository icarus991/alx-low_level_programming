#include "main.h"

/**
 * print_to_98 - Prints numbers from a given integer to 98.
 *
 * @n: The starting integer.
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
