#include "holberton.h"
/**
 * _sqrt_recursion - computes square root recursively
 * @x: given number
 * @y: comparison number
 * Return: 1 if sqrroot is not found, else sqrroot
 **/
int pow_recursion(int x, int y)
{
	if (x <= 0)
		return (-1);
	if (x * x == y)
		return (x);
	return (pow_recursion(x - 1, y));
}
int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
return (pow_recursion(n / 2, n));
}
int is_prime_number(int n)
{
if (n <= 1 || _sqrt_recursion(n) >= 1)
return (0);
if (_sqrt_recursion(n) == -1)
return (1);
return (_sqrt_recursion(n));
}
