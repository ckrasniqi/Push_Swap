


#include "push_swap.h"

bool	is_number(const char *str)
{
	int	i;

	i = 0;
	while (iswhitespace(str[i]) == 1)
		i++;
	if (str[i] == '\0')
		return (false);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (false);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	only_integers(char **str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			if (!is_number(str[i]))
				return (false);
			i++;
		}
	}
	return (true);
}

bool	duplicates(t_stack_node *a)
{
	t_stack_node	*temp;
	t_stack_node	*temp2;

	temp = a;
	while (temp)
	{
		temp2 = temp->next;
		while (temp2)
		{
			if (temp->value == temp2->value)
				return (true);
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
	return (false);
}
