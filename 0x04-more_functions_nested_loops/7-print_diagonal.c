#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int p, q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (p = 0; p < n; p++)
	{
		for (q = 0; q < p; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
