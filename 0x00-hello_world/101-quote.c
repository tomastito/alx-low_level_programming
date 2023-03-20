#include <unistd.h>

/**
 * main -Entry point
 *
 * Description: A C program that prints with printf function.
 * Return: Always 1 (not success)
*/

int main(void)
{
	char que[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1,que,59);
	return (1);
}
