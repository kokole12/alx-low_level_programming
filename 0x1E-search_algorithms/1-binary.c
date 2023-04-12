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
int left, right, mid;
int x;

if (array == NULL)
{
return (-1);
}
left = 0;
right = size - 1;

while (left < right)
{
mid = (left + right) / 2;
printf("Searching in array: ");
for (x = left; x <= right; x++)
{
printf("%i%s", array[x], x == right ? "\n" : ", ");
}

if (array[mid] < value)
{
left = mid + 1;
}
else if (array[mid] > value)
{
right = mid - 1;
}
else
{
return (mid);
}
}

return (-1);

}
