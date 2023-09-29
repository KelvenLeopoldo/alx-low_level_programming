#include "main.h"
#include <stdio.h>

/**
 * print_rev_recursion - function that print string reverse
 * @s: string that will be printed
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
