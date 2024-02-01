#include "lists.h"
#include <stdio.h>
/**
 *print_list - ...
 *@h: ...
 *
 *Return: ...
 */
size_t print_list(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                if ("[0] (nil)\n")
                {
                        printf("[%u] %s\n", h->len, h->str);
                }
                h = h->next;
                count++;
        }
        return count;
}
