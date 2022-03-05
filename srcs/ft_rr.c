#include "../includes/push_swap.h"

void rra(t_info *info, int flag)
{
    int n;

    if (pop_front(&info->top_a, &info->bot_a, &n))
    {
        push_back(n, &info->top_a, &info->bot_a);
        if (flag == 1)
            ft_putendl_fd("rra", 1);
    }
}

void rrb(t_info *info, int flag)
{
    if (pop_front(&info->top_b, &info->bot_b, &n))
    {
        push_back(n, &info->top_b, &info->bot_b);
        if (flag == 1)
            ft_putendl_fd("rrb", 1);
    }
}

void rrr(t_info *info, int flag)
{
    rra(info, 0);
    rrb(info, 0);
    if (flag == 1)
        ft_putendl_fd("rrr", 1);
}
