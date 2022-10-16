#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
*main - Determine if a number is positive, negative, negative or zero.
*
*Return: Always 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	/*if the number is greater than 0: is positive*/
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	/*if the number is 0: is zero*/
	printf("%d is zero\n", n);
}
else
{
	/*if the number is less than 0: is negative*/
	printf("%d is negative\n", n);
}
return (0);
}

