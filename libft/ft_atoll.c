#include "libft.h"

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
            print_error(1);
        str++;
    }
    return ((int)temp);
}