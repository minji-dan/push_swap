#include "push_swap.c"

void pa(t_info *info, int flag)
{
    int n;

    if (pop_back(&info->top_b), &info->bot_b, &n))
        {
            push_back();
            info->size_b--;
            info->size_a++;
            if (flag == TRUE)
                ft_putendl_fd("pa", 1);
        }
}

void pb(t_info *info, int flag)
{
    int n;

    if (pop_back(&info->top_a), &info->bot_a, &n))
        {
            push_back(n, &info->top_b, &info->bot_b);
            info->size_a--;
            info->size_b++;
            if (flag == TRUE)
                ft_putendl_fd("pb", 1);
        }
}