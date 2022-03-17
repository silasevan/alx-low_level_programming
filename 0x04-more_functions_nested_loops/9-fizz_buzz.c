/*
 * file - 9-fizz_buzz.c
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return : Always 0
 */

int main(void)
{

	int sum;

	for (sum = 0; sum <= 100; sum++)
	{
		if ((sum % 3) == 0 && (sum % 5) == 0)
			printf("FizzBuzz");

		else if ((sum % 3) == 0)
			printf("Fizz");

		else if ((sum % 5) == 0)
			printf("Buzz");

		else
			printf("%d", sum);

	if (sum == 100)
		continue;
	printf(" ");
	}
	
	printf('\n');

	return (0);
}

