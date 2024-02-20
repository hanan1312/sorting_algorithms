#include "sort.h"

/**
 * bubble_sort - Entry point
 * @array : input int
 * @size: size_t
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, k;
int temp;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
for (k = 0; k < size - 1; k++)
{
printf("%d, ", array[k]);
}
printf("%d\n", array[k]);
}
}
}
}