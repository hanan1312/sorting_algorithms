#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array: int
 * @size: size_t
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx, k;
int temp;

for (i = 0; i < size - 1; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
{
min_idx = j;
}
}

temp = array[min_idx];
array[min_idx] = array[i];
array[i] = temp;

for (k = 0; k < size - 1; k++)
{
printf("%d, ", array[k]);
}
printf("%d\n", array[k]);
}
}