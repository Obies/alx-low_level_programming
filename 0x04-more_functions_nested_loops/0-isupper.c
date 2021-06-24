#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - shows 1 if the input is uppercase character. 0 for the other cases.
 *@c: the character in ASCII code
 *
 *Return: 1 for uppercase, 0 for lowercase
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
