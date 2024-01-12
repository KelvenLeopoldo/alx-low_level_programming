#include <stdio.h>
/**
 * main -  prints its name, followed by a new line
 *
 * @argv: array that contains the command line arguments
 * @argc: number of command line arguments
 *
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
