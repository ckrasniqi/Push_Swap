/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:26:24 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/30 19:52:58 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*sorc;

	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	dest = dst;
	sorc = src;
	while (i < n)
	{
		*dest++ = *sorc++;
		i++;
	}
	return (dst);
}
// int	main(void)
// {
// 	char	src[20] = "hello world!";
// 	char	dest[12];
// 	printf("%s\n", ft_memcpy(dest, src, 12));
//     printf("%s", memcpy(dest, src, 12));
// 	return (0);
// }
