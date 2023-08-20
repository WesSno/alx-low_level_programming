#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letts;
	int count;

	count = 0;
	while (count < 10)
	{
		for (letts = 'a'; letts <= 'z'; letts++)
		{
			_putchar(letts);
		}
		_putchar('\n');
		count++;
	}
}
