


#include "push_swap.h"

t_stack_node	*create_node(int value)
{
	t_stack_node	*new_node;

	new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->above_median = NULL;
	new_node->price = INT_MAX;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->target = NULL;
	return (new_node);
}

void	add_to_list(t_stack_node **head, int value)
{
	t_stack_node	*new_node;
	t_stack_node	*last;

	new_node = create_node(value);
	if (!new_node)
		return ;
	if (!*head)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;

	}
}

t_stack_node	*remove_first_node(t_stack_node **head)
{
	t_stack_node	*temp;

	if (!*head)
		return (NULL);
	temp = *head;
	*head = (*head)->next;
	if(*head != NULL)
		(*head)->prev = NULL;
	temp->next = NULL;
	return (temp);
}

t_stack_node	*remove_last_node(t_stack_node **head)
{
	t_stack_node	*temp;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	if(temp->next == NULL)
	{
		temp->prev = NULL;
		*head = NULL;
		return (temp);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->prev->next = NULL;
	temp->prev = NULL;
	return (temp);
}

int	list_length(t_stack_node *stack)
{
	int				count;
	t_stack_node	*temp;

	count = 0;
	temp = stack;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
