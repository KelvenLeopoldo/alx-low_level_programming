#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - function that print the length of the word
*@s: input
*Return: legth of the string
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len + 1);
	}
	else
	{
		len++;
		_strlen_recursion(s + 1);
	}
}
