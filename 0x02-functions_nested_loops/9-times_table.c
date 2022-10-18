#include "main.h"
/**
* time_table - print the 9 times table
*/
void time_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		Putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + '0');

			_putchar((prd % 10) + '0');
		}
		_putchar('\n');
	}
}
