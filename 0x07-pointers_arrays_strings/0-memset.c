#include "holberton.h"
#include <stdio.h>
/**
 * _memset - Fills the memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the filled memory @s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
*ptr++ = b;
return (s);
}
