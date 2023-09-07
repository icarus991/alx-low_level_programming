/**
 * main - A C programme that prints a line without printf or puts function
 * Return: 1 (succes)
*/
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	const char *message = "and that piece of art is useful\"
- Dora Korpar, 2015-10-19\n";
ssize_t len = 55;
	if (write(STDERR_FILENO, message, len) != len)
	{
	return (1);
	}
	return (1);
}
