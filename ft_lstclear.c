/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 09:50:53 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/13 10:05:55 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*nextlst;

	while (*lst && del)
	{
		del((*lst)->content);
		nextlst = (*lst)->next;
		free(*lst);
		*lst = nextlst;
	}
	lst = NULL;
}
