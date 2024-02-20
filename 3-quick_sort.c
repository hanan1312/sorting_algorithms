#include "sort.h"

size_t lomuto_partition(int *array, size_t low, size_t high);
void quick_sort_recursive(int *array, size_t low, size_t high);

/**
 * quick_sort - Entry point
 * @array: int
 * @size: size_t
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (size < 2)
return;
quick_sort_recursive(array, 0, size - 1);
}


/**
 * quick_sort_recursive - Entry point
 * @array: int
 * @low: size_t
 * @low: high
 * Return: void
 */
void quick_sort_recursive(int *array, size_t low, size_t high)
{
size_t pivot_index;

if (low < high)
{
pivot_index = lomuto_partition(array, low, high);

quick_sort_recursive(array, low, pivot_index - 1);
quick_sort_recursive(array, pivot_index + 1, high);
}
}


/**
 * lomuto_partition - Entry point
 * @array: int
 * @low: size_t
 * @low: high
 * Return: void
 */
size_t lomuto_partition(int *array, size_t low, size_t high)
{
int pivot, temp;
size_t i, j;
i = low;

pivot = array[high];
for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
if (j <= i)
{
i ++;
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, high + 1);
} 


}
}
if (array[i] > pivot)
{
temp = array[i];
array[i] = array[high];
array[high] = temp;
print_array(array, high + 1);
}

return i + 1;
}

