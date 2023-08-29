#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -print all natural numbers from 0 t0 98
 *
 * @n: the integer to start the orinting from
 * Return: nothing
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%i, ", n);
n--;
}

printf("98");
putchar('\n');
}

