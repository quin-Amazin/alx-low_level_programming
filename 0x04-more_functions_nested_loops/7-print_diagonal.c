#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the character \ should be printed
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = o; i < n; i++)
		{
			for (j = o; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
