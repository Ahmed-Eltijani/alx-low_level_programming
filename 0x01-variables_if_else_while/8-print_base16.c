#include <stdio.h>

/**
 * main - enty point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
