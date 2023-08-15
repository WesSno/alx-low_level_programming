#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that prints all possible combinations
 * of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, g;

	for (f = 0; f <= 99; f++)
	{
		for (g = f; g <= 99; g++)
		{
			if (g != f)
			{
				putchar('0' + (f / 10));
				putchar('0' + (f % 10));
				putchar(' ');
				putchar('0' + (g / 10));
				putchar('0' + (g % 10));
				if (f != 98 || g != 99)
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
