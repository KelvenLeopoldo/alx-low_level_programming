#include "main.h"
#include <stdio.h>

/**
* main - check code
*
* return always 0.
*/
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d",r );
	r = factorial(5);
	printf("%d",r );
	r = factorial(10);
	printf("%d",r );
	r = factorial(-1024);
	printf("%d", r);
	return(0);
}
	

