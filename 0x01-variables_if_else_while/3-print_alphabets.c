#include <stdio.h>

/**
* main - program that prints all single digit numbers of base 10
* starting from 0
*
* return: 0
*/

int main(void)
{
	char sd;

	for (ch = 'a'; sd <= 'z'; sd++)
	putchar (sd);

	for (ch = 'A'; sd <= 'Z'; sd++)
	putchar (sd);

	putchar('\n');

	return (0);
}
