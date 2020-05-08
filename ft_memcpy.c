/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 00:22:41 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/08 00:25:16 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src_c;
	char	*dst_c;

	src_c = (char *)src;
	dst_c = (char *)dst;
	while (n-- > 0)
		*dst_c++ = *src_c++;
	dst_c = (char *)dst;
	return (dst_c);
}
