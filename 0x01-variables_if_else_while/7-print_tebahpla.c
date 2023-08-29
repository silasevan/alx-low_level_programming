#include <stdio.h>
/**
 *main - Entry point
 *
 * Description: We are only allowed to use putchar
 * Return: 0
 */

int main(void)
{
char n = 'z';
while (n >= 'a')
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}

