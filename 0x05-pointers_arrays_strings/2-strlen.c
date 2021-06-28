#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - returns length of string
 * @s: points to string character
 * Return: string length
 */
int _strlen(char *s)
{
int len = 0;
while(*s != '\0')
{
s++;
len++;
}
return (len);
}
