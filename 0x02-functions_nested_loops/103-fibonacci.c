#include "stdio.h"

/**
 * main - prints the even Fibonacci numbers starting with 1 and 2 to 4000000
 *
 * Return: int.
 */

int main(void)
{
long i = 0;
long j = 1;
int n = 0;
long fib;
long total = 0;

while (fib < 4000000)
{
fib = j + i;
printf("%ld\n", fib % 2);
if (fib % 2 == 0){
printf("%ld\n", fib);
total += fib;
}
i = j;
j = fib;
n += 1;
}
printf("%ld\n", total);
return (0);
}
