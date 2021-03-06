#include "../includes/push_swap.h"

void ft_finish(t_info *info)
{
    int i;

    i = find_max_stack(info);
    if (info->size_a / 2 + 1 < i)
    {
        i = info->size_a - i;
        while (i--)
            rra(info, 1);
        return;
    }
    else
    {
        while (i--)
            ra(info, 1);
        return;
    }
}

void find_best_move(t_info *info, int *min_a, int *min_b)
{
    int a_move;
    int b_move;
    int i;
    int num;
    t_deque *tmp;

    i = 0;
    while (tmp)
    {
        num = tmp->num;
        find_pos_a(info, num, &a_move);
        b_move = i;
        check_move_direc(info, &a_move, &b_move);
        set_min_move(min_a, min_b, a_move, b_move);
        tmp = tmp->prev;
        i++;
    }
}

void ft_rotate_rrr(t_info *info, int min_a, int min_b)
{
    int i;

    i = -1;
    if (min_a < min_b)
    {
        while (++i < min_a)
            rrr(info, 1);
        while (i++ < min_b)
            rrb(info, 1);
    }
    else
    {
        while (++i < min_b)
            rrr(info, 1);
        while (i++ < min_a)
            rra(info, 1);
    }
    pa(info, 1);
}

void ft_rotate_rr(t_info *info, int min_a, int min_b)
{
    int i;

    i = -1;
    if (min_a < min_b)
    {
        while (++i < min_a)
            rr(info, 1);
        while (i++ < min_b)
            rb(info, 1);
    }
    else
    {
        while (++i < min_b)
            rr(info, 1);
        while (i++ < min_a)
            ra(info, 1);
    }
    pa(info, 1);
}

void ft_rotate(t_info *info, int min_a, int min_b)
{
    if (min_a < 0 || min_b < 0)
    {
        min_a *= -1;
        min_b *= -1;
        ft_rotate_rrr(info, min_a, min_b);
    }
    else
        ft_rotate_rr(info, min_a, min_b);
}