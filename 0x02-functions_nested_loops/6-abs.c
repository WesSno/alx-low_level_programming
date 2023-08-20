#include "main.h"
/**
 * _abs - A function that computes the absolute value of an integer.
 *
 * @r: varibale to be computed
 *
 * Return: the absolute number or 0
 */
int _abs(int r)
{
	if (r < 0)
	{
		int abs_num;

		abs_num = r * -1;
		return (abs_num);
	}
	return (r);
}
