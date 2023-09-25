#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: A 2D array representing the chessboard.
*/

void print_chessboard(char (*a)[8])
{
	int str, ste;

	for (str = 0; str < 8; str++)
	{
		for (ste = 0; ste < 8; ste++)
		{
			_putchar(a[str][ste]);
		}
		_putchar('\n');
	}
}
