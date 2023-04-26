#include "main.h"
/**
* print_number - prints an integer
* @n: integer to be printed
*/
void print_number(int n, int *counter)
{
unsigned int n1;
if (n < 0)
{
n1 = -n;
_putchar('-');
(*counter)++;
}
else
{
n1 = n;
}
if (n1 / 10)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
(*counter)++;
}
