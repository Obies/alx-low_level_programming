#include "holberton.h"
#include <stdio.h>
/**
 * print_most_numbers - from 0 to 0, without 2 and 4
 *
 *Return: no return
 */

void print_most_numbers(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
if (ch != '2' && ch != '4')
_putchar(ch);
_putchar('\n');
}
