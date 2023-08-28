#include "main.h"
/**
 * _strlen - A function that returns the length of a string.
 * @s: pointer to a string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int text = 0;

	while (*s != '\0')
	{
		text++;
		s++;
	}

	return (text);
}
