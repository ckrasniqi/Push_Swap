/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:57:58 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/09 21:39:57 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	len;

	n = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (dstsize == 0)
	{
		return (len);
	}
	while (src[n] != '\0' && n < dstsize - 1)
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (len);
}
