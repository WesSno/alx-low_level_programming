#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char my_char;
	float my_float;
	int my_int;
	long my_long_int;
	long long my_long_long_int;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(my_char));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(my_float));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(my_int));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(my_long_int));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(my_long_long_int));
	return (0);
}
