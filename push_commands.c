



#include "push_swap.h"

void	push(t_stack_node **source, t_stack_node **target)
{
	t_stack_node	*temp;

	if (*source == NULL)
		return ;
	temp = remove_first_node(source);
	if (*target == NULL)
	{
		*target = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *target;
		(*target)->prev = temp;
		*target = temp;
	}
}

void	push_into_b(t_stack_node **a, t_stack_node **b)
{
	while (list_length(*a) > 3)
		pb(a, b);
}

void	pa(t_stack_node **b, t_stack_node **a)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack_node **a, t_stack_node **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
