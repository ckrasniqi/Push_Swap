/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:49:08 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/25 18:00:55 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		target;

	i = 0;
	str = (const unsigned char *)s;
	target = (unsigned char )c;
	while (i < n)
	{
		if (str[i] == target)
			return ((void *)(str + i));
		else
			i++;
	}
	return (NULL);
}
