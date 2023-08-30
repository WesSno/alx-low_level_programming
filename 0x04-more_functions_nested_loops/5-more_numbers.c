#include "main.h"
/**
 * more_numbers - A function that prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int d, e;

	for (d = 1; d <= 10; d++)
	{
		for (e = 0; e <= 14; e++)
		{
			if (e >= 10)
			{
				_putchar('1');
			}
			_putchar((e % 10) + 48);
		}
		_putchar('\n');
	}
}
