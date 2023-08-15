#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'A program that prints all possible different
 * combinations of two digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x != y && x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
