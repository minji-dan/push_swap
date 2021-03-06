#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    char *dest;

    dest = (char *)malloc(count * size);
    if (!dest)
        return (0);
    ft_bzero(dest, count * size);
    return (dest);
}