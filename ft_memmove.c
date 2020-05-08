/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 00:23:40 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/08 00:29:44 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;

	from = (unsigned char*)src;
	to = (unsigned char*)dst;
	if (from == to || len <= 0)
		return (to);
	if (to > from && (to - from) < (int)len)
	{
		i = len - 1;
		while (i >= 0 && *from)
		{
			to[i] = from[i];
			i--;
		}
		return (dst);
	}
	if (from > to && (from - to) < (int)len)
	{
		i = 0;
		while (i < len && *to)
		{
			to[i] = from[i];
			i++;
		}
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
