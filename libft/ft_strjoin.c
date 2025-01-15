/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:49:12 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/25 17:30:37 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (j <= ft_strlen(s2))
	{
		str[ft_strlen(s1) + j] = s2[j];
		j++;
	}
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (str);
}
// int	main(void)
// {
// 	char	*strjoin;
// 	strjoin = ft_strjoin("\0", "dolor sit amet");
// 	printf("RESULT: %s\n", strjoin);
// 	return (0);
// }
