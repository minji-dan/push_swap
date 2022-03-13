#include "libft.h"

static int is_space(char c)
{
    return (c == ' ' || (9 <= c && c <= 13));
}

int ft_atoll(const char *str)
{
    long long ret;
    long long temp;
    int minus;

    ret = 0;
    minus = 1;
    while (is_space(*str))
        str++;
    if (*str == '-')
        minus = -1;
    if (*str == '+' || *str == '-')
        str++;
    while (*str)
    {
        ret = ret * 10 + *str - '0';
        temp = ret * minus;
        if (!is_digit(*str) || temp > INT_MAX || temp < INT_MIN)
            ft_putendl_fd("Input error", 2);
        str++;
    }
    return ((int)temp);
}