#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r;

		for (r = 1; r <= n; r++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
