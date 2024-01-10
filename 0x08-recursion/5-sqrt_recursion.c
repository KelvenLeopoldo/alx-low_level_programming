#include "main.h"

/**
 *_sqrt_aux - return the natural root of a number
 *
 *@c: input
 *@d: input
 * Return: sqrt of n
 */
int _sqrt_aux(int c, int d)
{
	if (d * d == c)
	{
		return (d);
	} else if (d * d > c)
	{
		return (-1);
	}
	return (_sqrt_aux(c, d + 1));
}
/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: input
 * Return: natural sqtr
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_aux(n, 0));
}
