#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 *       if it matches
 *
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int exc;
	bool x;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (exc = 0; exc < size; exc++)
		{
			x = cmp(array[exc]);
			if (x == TRUE)
				return (exc);
		}
	}

	return (-1);

}
