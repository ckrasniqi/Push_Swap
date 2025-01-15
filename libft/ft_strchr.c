/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:21:40 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/27 22:34:31 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (char)c)
	{
		if (str[i] == 0)
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)&str[i]);
}
// int main ()
// {
// 	char str[8] = "Hello$$";
// 	printf("%s", ft_strchr(str, '6'));
// 	return(0);
// }
