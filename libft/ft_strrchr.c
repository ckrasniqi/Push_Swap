/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:25:23 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/27 21:01:51 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	temp;

	i = 0;
	temp = -1;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			temp = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	if (temp != -1)
		return ((char *)&str[temp]);
	return (NULL);
}
// int	main(void)
// {
// 	char	str[] = "geliamelias";
// 	char	*ret;
// 	// "ch" is search string char ch = 'a';
// 	ret = ft_strrchr(str, 'l');
// 	// ret = strchr(str, ch);
// 	printf("String is %s\n", ret);
// 	return (0);
// }
