#include "push_swap.c"

void ra(t_info *info, int flag)
{
    int n;

    if (pop_back(&info->top_a, &info->bot_a, &n))
    {
        push_front(n, &info->top_a, &info->bot_a);
        if (flag == 1)
            ft_putendl_fd("ra", 1);
    }
}

void rb(t_info *info, int flag)
{
    int n;

    if (pop_back(&info->top_b, &info->bot_b, &n))
    {
        push_front(n, &info->top_b, &info->bot_b);
        if (flag == 1)
            ft_putendl_fd("rb", 1);
    }
}

void rr(t_info *info, int flag)
{
    ra(info, 0);
    rb(info, 0);
    if (flag == 1)
        ft_putendl_fd("rr", 1);
}