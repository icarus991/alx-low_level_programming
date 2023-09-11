/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase and uppercase alphabets.
 *
 * Return: Always 0 (success)
*/

#include <stdio.h>
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
return (0);
}
