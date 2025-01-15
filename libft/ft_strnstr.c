/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:26:18 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/24 18:26:18 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len <= i)
		return (NULL);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && little[j] != '\0' && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *largestring = "Hello World";
// 	const char *smallstring = "or";
// 	char *ptr;
// 	ptr = ft_strnstr(largestring, smallstring, 5);
// 	printf("%s", ptr);
// }
