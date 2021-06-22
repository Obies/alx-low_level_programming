#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0(success)
 */
int main(void)
{
char *s=("Holberton\n");
while (*s) putchar(*s++);
return (0);
} 
