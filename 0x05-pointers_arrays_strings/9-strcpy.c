#include "holberton.h"
include <stdio.h>
/**
 * *_strcpy - copies string pointed to src
 * @dest: destination pointer
 * @src: destination source
 * Return: no return
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;

while (*(src + 1) != '\0')
{
l++;
}
for ( ; x < 1; x++)
{
dest[x] = src[x];
}
dest[1] = '\0';
return (dest);
}
