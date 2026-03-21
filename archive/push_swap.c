typedef struct s_node
{
    int value;
    int pos;
    int id;
    struct s_node *next;
}   t_node;

typedef struct s_stack
{
    t_node *a;
    t_node *b;
}   t_stack;

struct node node1, node2, node3;

node3 = {1, NULL};
node2 = {1, &node3};
node1 = {1, &node2};

struct node *needle_head = &node1;