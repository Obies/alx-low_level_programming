#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - swaps the integers
 *@a: value to be changed
 *@b: value to be changed
 *Return: no return.
 */
void swap_int(int *a, int *b)
{
int i = *a;
*a = *b;
*b = i;
}
