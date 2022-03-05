#include "../includes/push_swap.h"

void print_error(int n)
{
    if (n == 1)
    {
        ft_putendl_fd("Input error", 2);
        exit(1);
    }
}

void ft_parsing(int argc, char **argv, t_info *info)
{
    char **tmp;
    int i;
    int j;
    int num;

    i = 1;
    while (i < argc)
    {
        if (!argv[i] || !is_digit(argv[i][strlen(argv[i]) - 1]))
            print_error(1);
        tmp = ft_split(argv[i], ' ');
        j = 0;
        while (tmp[j])
        {
            num = ft_atoll(tmp[j]);
            push_back(num, &info->st_a_tail, &info->st_a_head);
            info->st_a_size++;
            j++;
        }
        free_vec((void **)tmp);
        i++;
    }
}