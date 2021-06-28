#include "holberton.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: pointer to the string
 * Return: no return
 */
void _puts(char *str)
{
int l = 0;
while (*(str + l) != '\0')
{
_putchar(str[l]);
l++;
}
_putchar('\n');
}
