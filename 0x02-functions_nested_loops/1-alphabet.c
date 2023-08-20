#include "main.h"
/**
 * print_alphabet - Alphabets in lower case
 *
 * Return:void
 */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
