#include "main.h"
/**
 * *_strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest.
 * @dest: pointer to copy to
 * @src: pointer to copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; n < m; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
