#include "stdio.h"

/**
 * main - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
long i = 0;
long j = 1;
int n = 0;
long fib;

while (n < 98)
{
fib = j + i;
if (n != 97)
printf("%ld, ", fib);
else
printf("%ld\n", fib);
i = j;
j = fib;
n += 1;
}
return (0);
}
