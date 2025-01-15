/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:38:24 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/24 19:38:24 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	int *arr = (int *)ft_calloc(5, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("arr[%d] = %d\n", i, arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }
