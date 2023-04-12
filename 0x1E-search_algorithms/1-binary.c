#include "search_algos.h"
/**
 * binary_search - searches the list by diving in half
 *
 * @size: size of the array
 * @array: the array to get the element from
 * @value: target element
 * Return: returns -1 with exit sucess
*/

int binary_search(int *array, size_t size, int value)
{
size_t mid, left, right;

if (array == NULL)
return (-1);

for (left = 0, right = size - 1; right >= left;)
{
printf("Searching in array: ");
for (mid = left; mid < right; mid++)
printf("%d, ", array[mid]);
printf("%d\n", array[mid]);

mid = left + (right - left) / 2;
if (array[mid] == value)
return (mid);
if (array[mid] > value)
right = mid - 1;
else
left = mid + 1;
}

return (-1);
}
