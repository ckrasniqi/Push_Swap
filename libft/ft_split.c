/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:54:29 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/27 22:23:42 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_freestring(char **strings, size_t arrayindex)
{
	size_t	j;

	j = 0;
	while (j < arrayindex)
	{
		free(strings[j]);
		j++;
	}
	free(strings);
	return (NULL);
}

int	ft_get_substringcount(char const *string, char delimiter)
{
	int		count;
	size_t	last_i;
	size_t	i;

	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		while (string[i] == delimiter)
		{
			i++;
		}
		last_i = i;
		while (string[i] != delimiter && string[i] != '\0')
		{
			i++;
		}
		if (i > last_i)
			count = count + 1;
	}
	return (count);
}

char	**ft_pastestring(const char *string, char **strings, char delimiter,
		size_t count)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = -1;
	while (++j < count)
	{
		len = 0;
		while (string[i] && string[i] == delimiter)
			i++;
		while (string[i] && string[i] != delimiter)
		{
			i++;
			len++;
		}
		strings[j] = ft_substr(string, i - len, len);
		if (strings[j] == NULL)
		{
			ft_freestring(strings, j);
			return (NULL);
		}
	}
	strings[j] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**strings;

	if (s == NULL)
		return (NULL);
	count = ft_get_substringcount(s, c);
	strings = (char **)ft_calloc((sizeof(char *)), (count + 1));
	if (strings == NULL)
		return (NULL);
	return (ft_pastestring(s, strings, c, count));
}
