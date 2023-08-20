#include "main.h"
/**
 * jack_bauer - A function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, e, i, o;

	for (a = 0; a <= 2; a++)
	{
		for (e = 0; e <= 9; e++)
		{
			if ((a <= 1 && e <= 9) || (a <= 2 && e <= 3))
			{
				for (i = 0; i <= 5; i++)
				{
					for (o = 0; o <= 9; o++)
					{
						_putchar(a + '0');
						_putchar(e + '0');
						_putchar(58);
						_putchar(i + '0');
						_putchar(o + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
