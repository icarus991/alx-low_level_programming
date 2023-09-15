#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100 with FizzBuzz conditions.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for (int num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}

	printf("\n");

	return (0);
}
