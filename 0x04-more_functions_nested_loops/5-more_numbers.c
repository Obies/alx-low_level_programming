#include "holberton.h"
/**
 * more_numbers - prints the same line 10 times from 0 to 14
 *
 *return: no return
 */

void more_numbers(void)
{
int c;
char ch;
for (c = 0; c < 10; c++)
{
for (ch = 0; ch <= 14; ch++)
{
if (ch > 9)
_putchar((ch / 10) + '0');
_putchar((ch % 10) + '0');
}
_putchar('\n');
}
}
