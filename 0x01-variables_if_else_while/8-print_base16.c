#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	char p;

	for (m = 0; m < 10; m++)
	{
		putchar(48 + m);
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
