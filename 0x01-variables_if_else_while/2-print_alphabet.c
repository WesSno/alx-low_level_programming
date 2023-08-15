#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low_alph;

	for (low_alph = 'a'; low_alph <= 'z'; low_alph++)
	{
		putchar(low_alph);
	}
	putchar('\n');
	return (0);
}
