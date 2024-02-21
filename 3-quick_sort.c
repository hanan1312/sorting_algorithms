#include "sort.h"

int lomuto_partition(int *array, size_t size, int low, int high);
void quick_sort_recursive(int *array, size_t size, int low, int high);
void swap_mem(int *a, int *b);

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
quick_sort_recursive(array,size,  0, size - 1);
}


/**
 * quick_sort_recursive - Entry point
 * @array: int
 * @low: size_t
 * @low: high
 * Return: void
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
int pivot_index;

if (low < high)
{
pivot_index = lomuto_partition(array, size, low, high);

quick_sort_recursive(array, size, low, pivot_index - 1);
quick_sort_recursive(array, size, pivot_index + 1, high);
}
}



/**
 * swap_mem - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_mem(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Entry point
 * @array: int
 * @low: size_t
 * @low: high
 * Return: void
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
int *pivot, i, j;

pivot = array + high;
for (j = i = low; j < high; j++)
{
if (array[j] < *pivot)
{
    printf("%d, %d",j,i );
if (j > i)
{

swap_mem(array + j, array + i);
print_array(array, size);

} 
i ++;

}
}
if (array[i] > *pivot)
{
swap_mem(array + i, pivot);
print_array(array, size);
}

return i + 1;
}

