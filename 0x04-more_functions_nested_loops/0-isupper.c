#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase
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
