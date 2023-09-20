#include "main.h"

/**
 * reverse_array - Reverses the order of elements in an integer array.
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
