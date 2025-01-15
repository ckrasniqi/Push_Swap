/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 22:26:09 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/27 22:34:42 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	i = 0;
	lsrc = 0;
	ldst = 0;
	while (dst[ldst] != '\0')
		ldst++;
	while (src[lsrc] != '\0')
		lsrc++;
	if (dstsize <= ldst)
		return (dstsize + lsrc);
	while (src[i] != '\0' && i < (dstsize - ldst - 1))
	{
		dst[ldst + i] = src[i];
		i++;
	}
	dst[ldst + i] = '\0';
	return (ldst + lsrc);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	s[12] = "hello world";
// 	char	c[5] = "1234";
// 	printf("%zu\n", ft_strlcat(s, c, 5));
// 	printf("%lu\n", strlcat(s, c, 5));
// 	return (0);
// }
