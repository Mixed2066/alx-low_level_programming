#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
void free_dog(dog_t *d)
{
if (d == NULL)
return;
else
{
free(d->name);
free(d->owner);
free(d);
}
}