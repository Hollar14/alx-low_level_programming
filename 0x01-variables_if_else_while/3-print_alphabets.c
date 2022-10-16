#include <stdio.h>

/*
* main - Entry
* Return: Always 0
*/
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	/*
	* for every i that's less than 26 increment a
	*/
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
