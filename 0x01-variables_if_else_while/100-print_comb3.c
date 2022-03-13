/*
 * file - 100-print_comb3
 */

#include <stdio.h>

/**
 * main - print number between 00 and 99
 *
 * Return: always 0
 */

int main(void)
{

	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 9 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
