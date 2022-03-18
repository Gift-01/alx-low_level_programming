#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of spaces before the line
 * Return: void
 */

void print_diagonal(int n)
{
for (int a = 0 ; a < n; a++)
{
for (int b = 0 ; b < a; b++)
{
_putchar(' ');
}
_putchar('\\n');
}
}
