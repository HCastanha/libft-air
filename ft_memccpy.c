/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 23:31:29 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/08 00:19:41 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_p;
	unsigned char *src_p;

	if (n)
	{
		dst_p = (unsigned char *)dst;
		src_p = (unsigned char *)src;
		if ((*dst_p++ = *src_p++) == (unsigned char)c)
			return (dst_p);
		while (--n != 0)
			if ((*dst_p++ = *src_p++) == c)
				return (dst_p);
	}
	return (0);
}
