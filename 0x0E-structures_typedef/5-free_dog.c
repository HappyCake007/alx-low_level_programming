#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog memory allocation.
 * @d: struct dog.
 *
 * Return: no return
 */

void free_dog(dog_doggie *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
