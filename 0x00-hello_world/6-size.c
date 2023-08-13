#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	float b;
	int c;
	long int d;
	long long int e;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(e));
	return (0);
}
