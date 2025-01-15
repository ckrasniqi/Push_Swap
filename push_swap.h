




#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					value;
	int					index;
	int					price;
	bool				above_median;
	struct s_stack_node	*target;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;


// algorithm_utils.c
t_stack_node	*find_largest(t_stack_node **stack);
t_stack_node	*find_smallest(t_stack_node **stack);
void			set_position(t_stack_node *stack);
t_stack_node	*find_cheapest(t_stack_node **stack);

// atol.c
int				iswhitespace(char c);
long			ft_atol(const char *str);

// error_check.c
bool			is_number(const char *str);
bool			only_integers(char **str);
bool			duplicates(t_stack_node *a);

// executions.c
void			rotate_target(t_stack_node **a, t_stack_node *cheapest);
void			rotate_node(t_stack_node **b, t_stack_node *cheapest);
void			rotate_node_and_target(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest);
void			execute_operations(t_stack_node **a, t_stack_node **b, t_stack_node *cheapest);

// free.c
void			free_llist(t_stack_node *stack);
char			**free_arrays(char **array);

// llist.c
t_stack_node	*create_node(int value);
void			add_to_list(t_stack_node **head, int value);
t_stack_node	*remove_first_node(t_stack_node **head);
t_stack_node	*remove_last_node(t_stack_node **head);
int				list_length(t_stack_node *stack);

// push_commands.c
void			push(t_stack_node **source, t_stack_node **target);
void			push_into_b(t_stack_node **a, t_stack_node **b);
void			pa(t_stack_node **b, t_stack_node **a);
void			pb(t_stack_node **a, t_stack_node **b);

// reverse_rotate_commands.c
void			reverse_rotate(t_stack_node **stack);
void			rra(t_stack_node **a);
void			rrb(t_stack_node **b);
void			rrr(t_stack_node **a, t_stack_node **b);

// rotate_commands.c
void			rotate(t_stack_node **stack);
void			ra(t_stack_node **a);
void			rb(t_stack_node **b);
void			rr(t_stack_node **a, t_stack_node **b);

// sorting_algorithm.c
void			set_target(t_stack_node *a, t_stack_node *b);
void			set_price(t_stack_node *a, t_stack_node *b);
void			sort_three(t_stack_node **stack);
void			push_swap(t_stack_node **a, t_stack_node **b);
void			sort_list(t_stack_node **a, t_stack_node **b, int list_len);

// swap_commands.c
void			swap(t_stack_node **stack);
void			sa(t_stack_node **a);
void			sb(t_stack_node **b);
void			ss(t_stack_node **a, t_stack_node **b);

#endif
