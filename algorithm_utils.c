


#include "push_swap.h"

t_stack_node	*find_largest(t_stack_node **stack)
{
	t_stack_node	*temp;
	t_stack_node	*largest;
	int				i;

	i = 0;
	if (!stack)
		return (NULL);
	temp = *stack;
	largest = *stack;
	largest->index = i;
	while (temp)
	{
		if (temp->value > largest->value)
		{
			largest = temp;
			largest->index = i;
		}
		temp = temp->next;
		i++;
	}
	return (largest);
}

t_stack_node	*find_smallest(t_stack_node **stack)
{
	t_stack_node	*temp;
	t_stack_node	*smallest;
	int				i;

	i = 0;
	if (!stack)
		return (NULL);
	temp = *stack;
	smallest = *stack;
	smallest->index = i;
	while (temp)
	{
		if (temp->value < smallest->value)
		{
			smallest = temp;
			smallest->index = i;
		}
		temp = temp ->next;
		i++;
	}
	return (smallest);
}


t_stack_node	*find_cheapest(t_stack_node **stack)
{
	t_stack_node	*temp;
	t_stack_node	*cheapest;

	if (!stack)
		return (NULL);
	temp = *stack;
	cheapest = *stack;
	while (temp)
	{
		if (temp->price < cheapest->price)
			cheapest = temp;
		temp = temp->next;
	}
	return (cheapest);
}

void	set_position(t_stack_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = list_length(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = false;
		else
			stack->above_median = true;
		stack = stack->next;
		i++;
	}
}
