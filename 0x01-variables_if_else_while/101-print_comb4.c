#include <stdio.h>
/**
 * main - Entry point
 *
 * Decription: ' program that prints all possible different
 * combinations of three digits'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (x != y && x < y && x != z && x < z)
				{
					if (y != z && y < z)
					{
						putchar('0' + x);
						putchar('0' + y);
						putchar('0' + z);
						if (x + y + z != 24)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
