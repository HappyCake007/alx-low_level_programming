#include <stdlib.h>
#include "main.h"

/*
 *function create_array creates an array of chars and initializes each elemenent.
 *@size= is size
 *@k = character
 *Return: If size == 0
 */

char *create_array(unsigned int size, char k) /*creates array*/
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = k;

	return (array);
}
