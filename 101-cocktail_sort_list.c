#include "sort.h"

listint_t *swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);


/**
 * cocktail_sort_list - Entry point
 * @list: listint_t
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
int swapped;
    listint_t *ptr1;
    listint_t *ptr2 = NULL;

    /* Check if the list is empty or contains only one node */
    if (*list == NULL || (*list)->next == NULL)
        return;

    do {
        swapped = 0;
        ptr1 = *list;

        /* Forward pass: bubble up the largest element */
        while (ptr1->next != ptr2)
        {
            if (ptr1->n > ptr1->next->n)
            {
                *list = swap_nodes(list, ptr1, ptr1->next);
                swapped = 1;
                print_list((const listint_t *)*list);
            }
            ptr1 = ptr1->next;
        }

        /* Set the last swapped node as the new end */
        ptr2 = ptr1;

        /* Backward pass: bubble down the smallest element */
        while (ptr1->prev != NULL) {
            if (ptr1->n < ptr1->prev->n) {
                *list = swap_nodes(list, ptr1->prev, ptr1);
                swapped = 1;
                printf("there");
                print_list((const listint_t *)*list);
            }
            ptr1 = ptr1->prev;
        }
    } while (swapped);
}




listint_t *swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
    listint_t *tmp;
    if (node1 == NULL || node2 == NULL)
        return *list;

    if (node1->prev != NULL)
        node1->prev->next = node2;
    else
        *list = node2;

    if (node2->next != NULL)
        node2->next->prev = node1;

    tmp = node2->next;
    node2->next = node1;
    node1->next = tmp;

    tmp = node1->prev;
    node1->prev = node2;
    node2->prev = tmp;

    return *list;
}
