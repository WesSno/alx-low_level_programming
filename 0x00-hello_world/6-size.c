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

	printf("Size of a char: %lu bytes(s)\n", sizeof(a));
	printf("Size of a float: %lu bytes(s)\n", sizeof(b));
	printf("Size of an int: %lu bytes(s)\n", sizeof(c));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(d));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(e));
	return (0);
}	
