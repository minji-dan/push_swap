#ifndef LIBFT_H
#define LIBFT_H

#include <sys/types.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

void ft_bzero(void *s, size_t n);
void ft_putendl_fd(char *s, int fd);
size_t ft_strlen(const char *src);
void *ft_calloc(size_t count, size_t size);
char **ft_split(char const *s, char c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

#endif