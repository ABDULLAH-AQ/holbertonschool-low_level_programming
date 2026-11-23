#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @action: pointer to the function to be executed on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	for (size_t i = 0; i < size; i++)
		action(array[i]);
}
