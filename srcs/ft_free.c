#include "../includes/push_swap.h"

void free_node(t_deque *node)
{
    free(node);
    node = NULL;
}

void free_all(t_info *info)
{
    t_deque *temp;

    while (info->bot_a)
    {
        temp = info->bot_a;
        info->bot_a = info->bot_a->next;
        free(temp);
    }
    while (info->bot_b)
    {
        temp = info->bot_b;
        info->bot_b = info->bot_b->next;
        free(temp);
    }
    free(info->arr);
}

void free_ptr(void *ptr)
{
    if (ptr)
    {
        free(ptr);
        ptr = NULL;
    }
}

void free_vec(void **vec)
{
    int i;

    i = 0;
    while (vec[i])
    {
        free_ptr(vec[i]);
        i++;
    }
    if (vec)
    {
        free(vec);
        vec = NULL;
    }
}