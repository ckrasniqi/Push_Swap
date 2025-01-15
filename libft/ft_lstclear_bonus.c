/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrasniq <ckrasniq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:22:42 by ckrasniq          #+#    #+#             */
/*   Updated: 2024/10/30 19:09:19 by ckrasniq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (*lst && del && lst)
	{
		while (*lst && lst)
		{
			temp = (*lst);
			(*lst) = (*lst)->next;
			del(temp->content);
			free(temp);
		}
	}
}
