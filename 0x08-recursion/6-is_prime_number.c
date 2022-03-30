#include "main.h"

/**
 * _is_prime_number - to serch for a prime number @n
 *
 * @n:number to compare
 *
 * Return: return 1 
 */

int is_prime_number(int n)
{

	if (n <= 0)
		return (-1);
	else if (n % 2 == 0 || n % !n == 0)
		return (-1);
	else 
		return (is_prime_number(n + 1) % n);

	return (1);
}
