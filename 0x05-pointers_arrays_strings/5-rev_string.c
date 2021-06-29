#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverses string
 * @s: the variable pointer
 * Return: no return
 */
void rev_string(char *s)
{
int i = 0, len;
char temp[10];
while (*s != '\0')
{
temp[i] = *s;
s++;
i++;
}
s = s - i - 1;
len = i;
i = 0;
while (i <= len)
{
*s = temp[len - i];
s++;
i++;
}
}
