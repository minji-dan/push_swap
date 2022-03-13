#include "libft.h"

size_t ft_strlen(const char *src)
{
    size_t len;

    len = 0;
    while (*src++)
        len++;
    return (len);
}