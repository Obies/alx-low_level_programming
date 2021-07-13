#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arguement count
 * @argv: array of pointer to arguement string
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
int a, b, result;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a * b;
printf("%d\n", result);
return (0);
}
