#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char.
 * @size: The sizr of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array or NULL if its fails
 */

char *create_array(size_t size, char c)
{
char *array;
size_t i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
