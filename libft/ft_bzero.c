#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *dst;

    dst = s;
    while (n--)
        *dst++ = 0;
}