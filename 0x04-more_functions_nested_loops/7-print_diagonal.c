#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of spaces before the line
 * Return: void
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
for (int a = 1 ; a <= n; a++)
{
for (int b = 1 ; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
