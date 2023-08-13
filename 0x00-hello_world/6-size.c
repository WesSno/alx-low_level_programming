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
	
	printf("Size of a char: %d bytes(s)\n", sizeof(a));
	printf("Size of a float: %d bytes(s)\n", sizeof(b));
	printf("Size of an int: %d bytes(s)\n", sizeof(c));
	printf("Size of a long int: %d bytes(s)\n", sizeof(d));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(e));
	return (0);
}	
