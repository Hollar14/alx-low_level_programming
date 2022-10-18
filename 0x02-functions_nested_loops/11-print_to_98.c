#include <stdio.h>
#include "main.h"

/**
* print_ to 98 - print all number from input to 98
* @n: the starting number
*/
void print _to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		printf("%d, ", n --1);
	}
	else
	{
		while (n < 98)
		printf("%d\n", n);
}
