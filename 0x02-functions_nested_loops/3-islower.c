#include "main.h"
/**
 * _islower - A function that checks for
 * lowercase character.
 *@c: variable to be checked
 *
 * Return: 1 for lowercase characters and
 * 0 for anythng else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
