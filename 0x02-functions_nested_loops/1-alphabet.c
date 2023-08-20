#include "main.h"
/**
 * main - Entry point
 *
 * Decription: A  function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
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
