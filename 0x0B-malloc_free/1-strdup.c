#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to newly allocated space with copy of argument
 * @str: string copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
char *strDup;
int i, j;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
i++;
strDup = malloc(sizeof(*str) * i);
if (strDup == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
{
strDup[j] = str[j];
j++;
}
return (strDup);
}
