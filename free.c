


#include "push_swap.h"

void	free_llist(t_stack_node *stack)
{
	t_stack_node	*temp;
	t_stack_node	*next_node;

	temp = stack;
	while (temp)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
}

char	**free_arrays(char **array)
{
	size_t	i;

	i = 0;
	if (!array)
		return (NULL);
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}
