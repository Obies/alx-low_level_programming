#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of square matrix integers
 * @a: 2D array
 * @size:  size of the square matrix
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i;
	int t = 0;
	int t1 = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		t += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		t1 += a[i];
	}

	printf("%d, %d\n", t, t1);
}
