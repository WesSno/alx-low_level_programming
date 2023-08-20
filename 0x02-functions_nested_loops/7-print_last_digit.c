#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number.
 *
 * @m: variable to be used
 *
 * Return: value of last digit
 */
int print_last_digit(int m)
{
	int l_digit;

	l_digit = m % 10;
	if (l_digit < 0)
	{
		l_digit *= -1;
	}
	_putchar(l_digit + 48);
	return (l_digit);
}
