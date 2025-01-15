/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:07:54 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/25 17:25:25 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_createnull(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	if (str != NULL)
		str[0] = '\0';
	return (str);
}

int	ft_check(char c, char const *d)
{
	int	i;

	i = 0;
	while (d[i] != '\0')
	{
		if (c == d[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	first;
	size_t	last;
	char	*str;

	i = 0;
	first = 0;
	last = ft_strlen(s1);
	while (s1 && ft_check(s1[i], set) == 1)
	{
		i++;
		first++;
	}
	if (first == last)
		return (ft_createnull());
	while (s1 && ft_check(s1[last - 1], set) == 1)
		last--;
	i = 0;
	str = (char *)malloc(last - first + 1);
	if (!str)
		return (NULL);
	while (first < last)
		str[i++] = s1[first++];
	str[i] = '\0';
	return (str);
}
