#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print all number from input to 98
* @n: the starting number
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		printf("%d, ", n--);
	}
	else
	{
		while (n < 98)
		printf("%d\n", n);
	}
}
