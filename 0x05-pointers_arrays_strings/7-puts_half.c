#include "main.h"
/**
 * puts_half - A function that prints half of a string, followed by a new line.
 * @str: string
 *
 * Return: half of string
 */
void puts_half(char *str)
{
	int x, y, text;

	text = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		text++;
	}
	y = (text / 2);
	if ((text % 2) == 1)
	{
		y = ((text + 1) / 2);
	}
	for (x = y; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
