#include "stdio.h"

/**
 * main - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
unsigned long long int i = 0;
unsigned long long int j = 1;
int n = 0;
unsigned long long int fib;

while (n < 98)
{
fib = j + i;
if (n != 97)
printf("%llu, ", fib);
else
printf("%llu\n", fib);
i = j;
j = fib;
n += 1;
}
return (0);
}
