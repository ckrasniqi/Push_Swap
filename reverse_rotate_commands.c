


#include "push_swap.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*temp;
	t_stack_node	*last_node;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	last_node = remove_last_node(stack);
	last_node->next = temp;
	temp->prev = last_node;
	*stack = last_node;
}

void	rra(t_stack_node **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack_node **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack_node **a, t_stack_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
