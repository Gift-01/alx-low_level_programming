#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Prints code from 0 to 14, 10 times
 *
 * Returns void
 */

void more_numbers (void)
{
for(int a = 0; a < 10; a++)
{
int i = 0;
for( ;i < 15; i++)
{
_putchar(i + '0');
}
_putchar('\n');
} 
}
