#include "main.h"

/**
 * _pow_recursion - function that return a power of a number
 * @x: base
 * @y: power
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
