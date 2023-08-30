#include <stdio.h>
/**
 * main - A program that prints numbers form 1 to 100,
 * followed by a new line. The multiples of 5 and 3 are
 * replaced by strings
 *
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if (l % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (l % 3 == 0)
		{
			printf("Fizz");
		}
		else if (l % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", l);
		}
		if (l < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
