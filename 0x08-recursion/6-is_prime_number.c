#include "main.h"

/**
 * prime_aux - Calculate if it is prime or no
 * @a: input number
 * @b: divisor
 * Return: (0)
 */
int prime_aux(int a, int b)
{
	if (a <= 1 || (a != b && b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_aux(a, b + 1));
}
/**
 * is_prime_number - detect if it is a prime or no
 * @n: input
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_aux(n, 2));
}
