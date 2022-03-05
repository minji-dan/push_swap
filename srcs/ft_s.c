#include "../includes/push_swap.h"

void sa(t_info *info, int flag)
{
    t_deque *temp;
    int num;

    if (info->size_a >= 2)
    {
        if (info->size_a != 2)
        {
            pop_back(&info->top_a, &info->bot_a, &num);
            push_front(num, &info->top_a, &info->bot_a);
        }
        else
        {
            temp = info->st_a_tail->prev;
            info->st_a_tail->prev = temp->prev;
            temp->prev->next = info->st_a_tail;
            temp->prev = info->st_a_tail;
            temp->next = NULL;
            info->st_a_tail->next = temp;
            info->st_a_tail = temp;
        }
        if (flag == 1)
            ft_putendl_fd("sa", 1);
    }
}

void sb(t_info *info, int flag)
{
    t_deque *temp;
    int num;

    if (info->size_b >= 2)
    {
        if (info->size_b == 2)
        {
            pop_back(&info->top_b, &info->bot_b, &num);
            push_front(num, &info->top_b, &info->bot_b);
        }
        else
        {
            temp = info->st_b_tail->prev;
            info->st_b_tail->prev = temp->prev;
            temp->prev->next = info->st_b_tail;
            temp->prev = info->st_b_tail;
            temp->next = NULL;
            info->st_b_tail->next = temp;
            info->st_b_tail = temp;
        }
        if (flag == 1)
            ft_putendl_fd("sb", 1);
    }
}

void ss(t_info *info, int flag)
{
    if (info->size_a >= 3 && info->size_b >= 3)
    {
        sa(info, 0);
        sb(info, 0);
        if (flag == 1)
            ft_putendl_fd("ss", 1);
    }
}