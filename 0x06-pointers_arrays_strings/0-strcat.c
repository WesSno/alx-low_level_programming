#include "main.h"
/**
 * _strcat - A function that concatenates two strings.
 * @dest: string
 * @src: string
 *
 * Return: resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;
	n = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
