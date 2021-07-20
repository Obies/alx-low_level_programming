#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize variable type struct dog
 * @d: pointer element of type dog
 * @name: pointer to a char for dog name
 * @age: dog age
 * @owner: pointer to a char for dog owner
 * Return: nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
