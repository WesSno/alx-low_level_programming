#include "main.h"
/**
 * _atoi - A function that convert a string to an integer.
 * @s: string to convert
 *
 * Return: the int converted to a string
 */
int _atoi(char *s)
{
	int a, e, i, len, o, num;

	a = 0;
	e = 0;
	i = 0;
	len = 0;
	o = 0;
	num = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (a < len && o == 0)
	{
		if (s[a] == '-')
		{
			e++;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (e % 2)
			{
				num = -num;
			}
			i = i * 10 + num;
			o = 1;
			if (s[i + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			o = 0;
		}
		a++;
	}
	if (o == 0)
	{
		return (0);
	}
	return (i);
}
