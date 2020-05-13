/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:16:30 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/13 09:27:05 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *item;

	if ((item = (t_list *)malloc(sizeof(t_list))) == 0)
		return (0);
	item->content = content;
	item->next = NULL;
	return (item);
}
