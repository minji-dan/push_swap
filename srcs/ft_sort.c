#include "../includes/push_swap.h"

void ft_sort_three(t_info *info)
{
    int bot;
    int mid;
    int top;

    bot = info->bot_a->num;
    mid = info->bot_a->next->num;
    top = info->top_a->num;
    if (top > mid && mid > bot && bot < top)
    {
        sa(info, 1);
        if (info->size_b == 0)
            rra(info, 1);
    }
    else if (top < mid && mid > bot && bot > top)
    {
        sa(info, 1);
        if (info->size_b == 0)
            ra(info, 1);
    }
    else if (top > mid && mid < bot && bot < top)
        ra(info, 1);
    else if (top > mid && mid < bot && bot > top)
        sa(info, 1);
    else if (top < mid && mid > bot && bot < top)
        rra(info, 1);
}

void ft_sort_three_pivot(t_info *info)
{
    int i;
    int piv_a;
    int piv_b;

    piv_a = info->size_a / 3;
    piv_b = info->size_a * 2 / 3;
    i = info->size_a;
    while (i--)
    {
        if (info->top_a->num < info->arr[piv_b])
        {
            pb(info, 1);
            rb(info, 1);
        }
        else if (info->top_a->num < info->arr[piv_a])
            pb(info, 1);
        else
            ra(info, 1);
    }
}

void ft_sort_big(t_info *info)
{
    int min_a;
    int min_b;

    if (info->size_a >= 100)
        ft_sort_three_pivot(info);
    while (info->size_a > 3)
        pb(info, 1);
    if (info->size_a == 2)
    {
        if (info->top_a->num > info->bot_a->num)
            sa(info, 1);
    }
    else if (info->size_a == 3)
        ft_sort_three(info);
    while (info->size_b)
    {
        min_a = INT_MAX;
        min_b = INT_MAX;
        find_best_move(info, &min_a, &min_b);
        ft_rotate(info, min_a, min_b);
    }
    ft_finish(info);
}

int find_max_stack(t_info *info)
{
    int i;
    t_deque *temp;

    temp = info->top_a;
    i = 1;
    while (temp)
    {
        if (temp->num == info->arr[0])
            break;
        temp = temp->prev;
        i++;
    }
    return (i);
}

void ft_sort(t_info *info)
{
    if (info->size_a == 1)
        return;
    if (info->size_a == 2)
    {
        if (info->bot_a->num < info->top_a->num)
            sa(info, 1);
    }
    else if (info->size_a == 3)
        ft_sort_three(info);
    else
        ft_sort_big(info);
}