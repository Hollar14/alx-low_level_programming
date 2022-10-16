#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		/*if the last digit of n is greater than 5: the string and is greater than 5*/
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		/*if the last digit of n is 0: the string and is 0*/
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		/*if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0*/
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
