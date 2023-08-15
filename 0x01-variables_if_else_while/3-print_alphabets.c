#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowers = 'a';
	char uppers = 'A';

	while (lowers <= 'z')
	{
		putchar(lowers);
		lowers++;
	}
	while (uppers <= 'Z')
	{
		putchar(uppers);
		uppers++;
	}
	putchar('\n');
	return (0);
}
