#include "../includes/push_swap.h"

t_deque *create_node(int num)
{
    t_deque *node;

    node = (t_deque *)malloc(sizeof(t_deque));
    if (node == NULL)
        return (NULL);
    node->num = num;
    node->prev = NULL;
    node->next = NULL;
    return (node);
}

void push_back(int num, t_deque **top, t_deque **bot)
{
    t_deque *node;

    node = create_node(num);
    if (node == NULL)
        return;
    if (*top == NULL)
    {
        *bot = node;
        *top = node;
    }
    else
    {
        (*top)->next = node;
        node->prev = *top;
        *top = node;
    }
}

void push_front(int num, t_deque **top, t_deque **bot)
{
    t_deque *node;

    node = create_node(num);
    if (node == NULL)
        return;
    if (*bot == NULL)
    {
        *bot = node;
        *top = node;
    }
    else
    {
        (*bot)->prev = node;
        node->next = *bot;
        *bot = node;
    }
}

int pop_back(t_deque **top, t_deque **bot, int *num)
{
    if (!(*top))
        return (0);
    *num = (*top)->num;
    if (*top == *bot)
    {
        free_node(*top);
        *top = NULL;
        *bot = NULL;
    }
    else
    {
        *top = (*top)->prev;
        free((*top)->next);
        (*top)->next = NULL;
        if (*top == *bot)
            (*bot)->next = NULL;
    }
    return (1);
}

int pop_front(t_deque **top, t_deque **bot, int *num)
{
    if (!(*bot))
        return (0);
    *num = (*bot)->num;
    if (*top == *bot)
    {
        free_node(*bot);
        *top = NULL;
        *bot = NULL;
    }
    else
    {
        *bot = (*bot)->next;
        free((*bot)->prev);
        (*bot)->prev = NULL;
        if (*bot == *top)
            (*top)->prev = NULL;
    }
    return (1);
}