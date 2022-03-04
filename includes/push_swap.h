#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct s_data
{
    int num;
} t_data;

typedef struct s_deque
{
    t_data data;
    struct s_deque *prev;
    struct s_deque *next;
} t_deque;

typedef struct s_info
{
    int st_a_size;
    int st_b_size;
    t_deque *st_a_head;
    t_deque *st_b_head;
    t_deque *st_a_tail;
    t_deque *st_b_tail;
    int *arr;
} t_info;

/* libft */
void ft_bzero(void *s, size_t n);
void ft_putendl_fd(char *s, int fd);
size_t ft_strlen(const char *src);
void *ft_calloc(size_t count, size_t size);
char **ft_split(char const *s, char c);

#endif