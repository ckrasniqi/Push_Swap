/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:38:53 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/25 18:38:53 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	j;
	size_t	len;
	char	*dup;

	j = 0;
	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (j <= len)
	{
		dup[j] = s[j];
		j++;
	}
	return (dup);
}
// int	main(void)
// {
// 	const char *original = "Hello, World!";
// 	char *copy = ft_strdup(original);
// 	if (copy == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Original: %s\n", original);
// 	printf("Copy: %s\n", copy);
// 	// Free the memory allocated by ft_strdup
// 	free(copy);
// 	return (0);
// }
