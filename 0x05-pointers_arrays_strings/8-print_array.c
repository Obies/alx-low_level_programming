#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints out array
 * @n: pointer to n
 * @a: pointer to a
 * Return: no return
 */
void print_array(int *a, int *n)
{
while (n > 0)
{
printf("%d\n", *a);
a++;
n--;
}
}
