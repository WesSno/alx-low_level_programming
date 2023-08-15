#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char h = 'z';

	while (h >= 'a')
	{
		putchar(h);
		h--;
	}
	putchar('\n');
	return (0);
}
