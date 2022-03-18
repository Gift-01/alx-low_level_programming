#include "main.h"

/**
 * more_numbers - Prints code from 0 to 14, 10 times
 *
 * Return: always void
 */

void more_numbers (void)
{
int a, i;
for(a = 0; a < 10; a++)
{

for(i = 0 ;i < 15; i++)
{
if ( i >= 10 )
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
