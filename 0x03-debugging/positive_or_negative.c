#include "main.h"
/**
 * main - Checks if a number is positive or negative or 0
 *
 * 0: is the number to be checked
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
