#include "main.h"
/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
	int text = 0;
	int l = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		text++;
	}
	l = text - 1;
	for (b = 0; b <= l; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
