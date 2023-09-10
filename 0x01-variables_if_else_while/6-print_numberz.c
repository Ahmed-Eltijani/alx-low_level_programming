#include <stdio.h>

/**
 * main - enty point
 *
 * Description: print numbers from 0-9 without using char variable
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
