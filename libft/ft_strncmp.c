#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char *b1;
    unsigned char *b2;

    b1 = (unsigned char *)s1;
    b2 = (unsigned char *)s2;
    if (n == 0)
        return (0);
    while (*b1 && (*b1 == *b2) && --n)
    {
        b1++;
        b2++;
    }
    return ((int)*b1 - (int)*b2);
}