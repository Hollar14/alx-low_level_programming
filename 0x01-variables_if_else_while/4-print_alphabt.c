#include <stdio.h>

/**
* main - program that prints the alphabet in lowercase without q and e
* Return: Always 0 (Success)
*/

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		putchar(al);
	}
	putchar('\n');

	return (0);
}
