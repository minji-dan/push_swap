#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

#include "../libft/libft.h"

#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct s_deque
{
    int num;
    struct s_deque *prev;
    struct s_deque *next;
} t_deque;

typedef struct s_info
{
    int size_a;
    int size_b;
    t_deque *bot_a;
    t_deque *bot_b;
    t_deque *top_a;
    t_deque *top_b;
    int *arr;
} t_info;

typedef struct s_merge
{
    int *b;
    int low_index;
    int mid_index;
    int b_index;
} t_merge;

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

/* presort merge 연산 */
void make_array(t_info *info);
void init_m_info(int low, int mid, int hight, t_merge *m_info);
void merge(int *a, int low, int mid, int hight);
void mergeSort(int *a, int low, int hight);
void ft_presort(t_info *info);

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