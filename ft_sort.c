#include "push_swap.h"

void ft_sort_three(t_info *info)
{
    int head;
    int mid;
    int tail;

    head = info->st_a_head->data.num;
    mid = info->st_a_head->next->data.num;
    tail = info->st_a_tail->data.num;
    if (tail > mid && tail > head && tail > mid)
    {
        sa(info, 1);
        rra(info, 1);
    }
    else if (mid > tail && mid > head && head > tail)
    {
        sa(info, 1);
        ra(info, 1);
    }
    else if (tail > mid && head > mid && tail > head)
        ra(info, 1);
    else if (tail > mid && head > mid && head > tail)
        sa(info, 1);
    else if (mid > tail && mid > head && tail > head)
        rra(info, 1);
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