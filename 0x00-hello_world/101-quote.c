#include <unistd.h>
/**
 * main - A prgram that prints a string to the standard error
 *
 * Retrn: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
