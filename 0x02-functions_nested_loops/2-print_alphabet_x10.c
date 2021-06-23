#include "holberton.h"
/**
 *print_alphabet_x10 - print alphabet 10 times
 *
 *Return: always 0
 */

void print_alphabet_x10(void)
{
int a, c;
for (a = 0; a <= 9; a++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
