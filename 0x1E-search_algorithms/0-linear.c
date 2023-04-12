#include "search_algos.h"
/**
 * linear_search - searches element by going through each element
 *
 * @array: input array
 * @value: target
 * @size: size of the array
 * Return: always exits on success
*/

int linear_search(int *array, size_t size, int value)
{
size_t x;

if (array == NULL)
{
return (-1);
}

for (x = 0; x < size; x++)
{
printf("Value checked array[%li] = [%i]\n", x, array[x]);
if (array[x] == value)
{
return (x);
}
}
return (-1);
}
