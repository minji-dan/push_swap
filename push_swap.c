typedef struct s_node t_node;
struct s_node
{
    int value;
    t_node *prev;
    t_node *next;
}