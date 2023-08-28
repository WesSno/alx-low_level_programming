#include "main.h"
/**
 * print_array - A function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: array
 * @n: is the number of elements of the array to be printed
 *
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < (n - 1); e++)
	{
		printf("%d, ", a[e]);
	}
	if (e == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
