
#include "push_swap.h"
#include <stdio.h>

void	sort(t_stack_node **a, t_stack_node **b)
{
	int list_len;

	list_len = list_length(*a);//Get the length of the list
	if (list_len < 2)
		return ;
	else if (list_len <= 3)
		sort_three(a);
	else
	{
		push_into_b(a, b);
		sort_list(a, b, list_len);
	}
}

int	initialize_list(t_stack_node **a, t_stack_node **b, char **arg)
{
	int	i;

	if (arg)
	{
		i = 0;
		while (arg[i])
		{
			if (ft_atol(arg[i]) > INT_MAX || ft_atol(arg[i]) < INT_MIN)//Check if the value is an integer
				return (free_arrays(arg), write(2, "ERROR\n", 7), 1);
			add_to_list(a, ft_atol(arg[i])); //Add the value to the list
			i++;
		}
	}
	free_arrays(arg);//Free the array
	if (duplicates(*a))//Check if there are duplicates
		return (write(2, "ERROR\n", 7), 1);
	else
		sort(a, b);//Sort the list
	return (0);
}

char	**arguments_into_array(int ac, char **av)
{
	char	**arg;
	int		i;
	int		j;

	arg = (char **)malloc(sizeof(char *) * (ac + 1));
	if (!arg)
		return (write(2, "ERROR\n", 7), NULL);
	i = 1;
	j = 0;
	while (i < ac)
	{
		arg[j] = ft_strdup(av[i]);
		if (!arg[j])
			return (free_arrays(arg), NULL);
		i++;
		j++;
	}
	arg[j] = NULL;
	return (arg);
}

int main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**arg;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (write(2, "ERROR\n", 7), 1);
	else if (ac == 2)
		arg = ft_split(av[1], ' ');
	else
	{
		arg = arguments_into_array(ac, av);
		if (!arg)
			write(2, "ERROR\n", 7);
	}
	if(only_integers(arg))//Check if the arguments are only integers
		initialize_list(&a, &b, arg);
	else
		return(free_arrays(arg), write(2, "ERROR\n", 7), 1);//If not, free the array and print error
	free_llist(a);//Free the list
	return (0);
}
