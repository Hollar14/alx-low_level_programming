#include <stdio.h>

/**
* main - program that prints all single digit numbers of base 10
* starting from 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char sd;

	for (sd = 'a'; sd <= 'z'; sd++)
	putchar (sd);

	for (sd = 'A'; sd <= 'Z'; sd++)
	putchar (sd);

	putchar('\n');

	return (0);
}
