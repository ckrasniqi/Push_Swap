


#include "push_swap.h"

void	set_target(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*temp;
	t_stack_node	*target;

	while (b)
	{
		temp = a;
		target = NULL;
		while (temp)
		{
			if (temp->value > b->value && (!target
					|| temp->value < target->value))
			{
				target = temp;
			}
			temp = temp->next;
		}
		if (!target)
			b->target = find_smallest(&a);
		else
			b->target = target;
		b = b->next;
	}
}

void	set_price(t_stack_node *a, t_stack_node *b)
{
	int	size_a;
	int	size_b;
	int	price;

	size_a = list_length(a);
	size_b = list_length(b);
	while (b)
	{
		price = 0;
		if (b->above_median && b->target->above_median)
			price = (size_b - b->index) + (size_a - b->target->index);
		else if (!b->above_median && b->target->above_median)
			price = (b->index) + (size_a - b->target->index);
		else if (b->above_median && !b->target->above_median)
			price = (size_b - b->index) + (b->target->index);
		else if (!b->above_median && !b->target->above_median)
			price = (b->index) + (b->target->index);
		b->price = price;
		b = b->next;
	}
}

void	sort_three(t_stack_node **stack)
{
	t_stack_node	*largest;

	largest = find_largest(stack);
	if (*stack == largest)
		ra(stack);
	else if ((*stack)->next == largest)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	push_swap(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest;

	set_position(*a);
	set_position(*b);
	set_target(*a, *b);
	set_price(*a, *b);
	cheapest = find_cheapest(b);
	execute_operations(a, b, cheapest);
}

void	sort_list(t_stack_node **a, t_stack_node **b, int list_len)
{
	sort_three(a);
	while(list_length(*a) < list_len)
		push_swap(a, b);
	while ((*a)->value != find_smallest(a)->value)
	{
		if (find_smallest(a)->above_median == true)
			rra(a);
		else
			ra(a);
	}
}
