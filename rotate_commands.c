


#include "push_swap.h"

void	rotate(t_stack_node **stack)
{
	t_stack_node	*temp;
	t_stack_node	*first_node;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first_node = remove_first_node(stack);
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = first_node;
	first_node->prev = temp;
}

void	ra(t_stack_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack_node **a, t_stack_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
