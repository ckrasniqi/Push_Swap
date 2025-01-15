/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:53:53 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/27 22:34:13 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*sorc;

	if (!dst && !src)
	{
		return (NULL);
	}
	dest = dst;
	sorc = src;
	if (dest < sorc)
	{
		while (len--)
		{
			*dest++ = *sorc++;
		}
	}
	else
	{
		while (len--)
		{
			dest[len] = sorc[len];
		}
	}
	return (dst);
}
// int main() {
//     char str1[] = "Hello, World!";
//     memmove(str1 + 7, str1, 6);
//     printf("%s\n", str1);  // Output: "Hello, Hello!"
//     return 0;
// }
