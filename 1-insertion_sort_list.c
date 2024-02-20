#include "sort.h"

/**
 * bubble_sort - Entry point
 * @list: size_t
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp, *tmp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;
while (current != NULL)
{
temp = current->prev;
while (temp != NULL && temp->n > current->n)
{
if (temp->prev != NULL)
temp->prev->next = current;
if (current->next != NULL)
current->next->prev = temp;
temp->next = current->next;
current->prev = temp->prev;
current->next = temp;
temp->prev = current;

if (current->prev == NULL)
*list = current;
if (temp->next != NULL)
temp->next->prev = temp;
tmp = *list;
while (tmp != NULL)
{
if (tmp->next == NULL)
{
printf("%d ", tmp->n);
}
else
{
printf("%d, ", tmp->n);

}
tmp = tmp->next;
}
printf("\n");

temp = current->prev;
}
current = current->next;
}
}