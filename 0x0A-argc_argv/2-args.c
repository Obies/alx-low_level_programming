#include <stdio.h>
/**
 * main - prints all argument it receives.
 * @argc: arguement count
 * @argv: array of pointer to argument string
 * Return: 0
 **/
int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
