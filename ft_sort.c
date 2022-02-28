#include "push_swap.h"

void ft_sort_three(t_info *info)
{
}

void ft_sort_big(t_info *info)
{
}

void ft_sort(t_info *info)
{
    if (info->st_a_size == 1)
        return;
    if (info->st_a_size == 2)
    {
        if (info->st_a_head->data.num < info->st_a_tail->data.num)
            sa(info, 1);
    }
    else if (info->st_a_size == 3)
        ft_sort_three(info);
    else
        ft_sort_big(info);
}