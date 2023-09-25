#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix.
 * @a: A pointer to the square matrix.
 * @size: The size of the square matrix.
*/

void print_diagsums(int *a, int size);
{
	int str, s1 = 0, s2 = 0;

	for (str = 0; str < size; str++)
	{
		s1 += a[str];
		s2 += a[size - str - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
