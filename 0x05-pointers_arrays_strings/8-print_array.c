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
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != n - 1)
{
printf(", ");
}
}
printf("\n");
}
