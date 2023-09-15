#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is number of times the \ charecter
 *	should be printed
*/

void print_diagonal(int n)
{
	int postn, space;

	for (postn = 0; postn < n; postn++)
	{
		if (n > 1)
			for (space = 0; space < postn; space++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
