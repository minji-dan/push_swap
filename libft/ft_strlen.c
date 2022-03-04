#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *s_cur;

    s_cur = s;
    while (n--)
        *s_cur++ = 0;
}