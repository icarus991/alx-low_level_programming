/**
 * main - Entry point
 *
 * Description: print alphabet with putchar
 *
 * Return: Always 0 (succes)
*/

#include <stdio.h>
	int main(void)
{
	char a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
return(0);
}
