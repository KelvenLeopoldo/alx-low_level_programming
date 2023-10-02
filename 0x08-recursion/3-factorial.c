#include "main.h"

/**
 * factorial - function that print a factotial of a number
 * @n: input
 * Return: the value of factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
