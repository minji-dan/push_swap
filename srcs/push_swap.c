#include "../includes/push_swap.h"

int check_already_sorted(t_info *info)
{
    t_deque *tmp;
    int i;

    tmp = info->bot_a;
    i = 0;
    while (tmp && i < info->size_a)
    {
        if (info->arr[i] != tmp->num)
            return (0);
        i++;
        tmp = tmp->next;
    }
    return (1);
}

void init_info(t_info *info)
{
    info->top_a = NULL;
    info->top_b = NULL;
    info->bot_a = NULL;
    info->bot_b = NULL;
    info->size_a = 0;
    info->size_b = 0;
}

int main(int argc, char **argv)
{
    t_info info;

    if (1 < argc)
    {
        init_info(&info);
        ft_parsing(argc, argv, &info);
        ft_presort(&info);
        if (!check_already_sorted(&info)) //인자가 순서대로 들어오는 경우 아무것도 출력x
            ft_sort(&info);
        free_all(&info);
    }
    return (0);
}