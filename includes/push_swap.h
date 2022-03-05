#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

#include "../libft/libft.h"

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

/* free */
void free_node(t_deque *node);
void free_all(t_info *info);
void free_ptr(void *ptr);
void free_vec(void **vec);

/* deque utility */
t_deque *create_node(int num);
void push_back(int num, t_deque **top, t_deque **bot);
void push_front(int num, t_deque **top, t_deque **bot);
int pop_back(t_deque **top, t_deque **bot, int *num);
int pop_front(t_deque **top, t_deque **bot, int *num);

/* push swap 연산 utility */
void sa(t_info *info, int flag);
void sb(t_info *info, int flag);
void ss(t_info *info, int flag);
void pa(t_info *info, int flag);
void pb(t_info *info, int flag);
void ra(t_info *info, int flag);
void rb(t_info *info, int flag);
void rr(t_info *info, int flag);
void rra(t_info *info, int flag);
void rrb(t_info *info, int flag);
void rrr(t_info *info, int flag);

#endif