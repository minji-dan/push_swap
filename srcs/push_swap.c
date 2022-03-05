#include "../includes/push_swap.h"

int check_already_sorted(t_info *info)
{
    t_deque *tmp;
    int i;

    tmp = info->st_a_head;
    i = 0;
    while (tmp && i < info->st_a_size)
    {
        if (info->arr[i] != tmp->data.num)
            return (0);
        i++;
        tmp = tmp->next;
    }
    return (1);
}

void init_info(t_info *info)
{
    info->st_a_head = NULL;
    info->st_b_head = NULL;
    info->st_a_tail = NULL;
    info->st_b_tail = NULL;
    info->st_a_size = 0;
    info->st_b_size = 0;
}

int main(int argc, char **argv)
{
    t_info info;

    if (1 < argc)
    {
        init_info(&info);
        ft_parsing(argc, argv, &info);
        preprocessing(&info);
        if (!check_already_sorted(&info)) //인자가 순서대로 들어오는 경우 아무것도 출력x
            ft_sort(&info);
        print_deque(&info);
        free_all(&info);
    }
    return (0);
}