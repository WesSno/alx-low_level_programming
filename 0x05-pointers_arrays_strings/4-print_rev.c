#include "main.h"
/**
 * print_rev - A function that prints a
 * string, in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int text = 0;
	int m;

	while (*s != '\0')
	{
		text++;
		s++;
	}
	s--;
	for (m = text; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
