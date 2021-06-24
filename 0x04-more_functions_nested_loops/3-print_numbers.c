#include "holberton.h"
#include <stdio.h>
/**
 * print_numbers - prints from 0 to 9
 *
 *Return: no return
 */

void print_numbers(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
_putchar(ch);
_putchar('\n');
}
