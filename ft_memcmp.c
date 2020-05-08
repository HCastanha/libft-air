/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 00:21:51 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/08 00:22:10 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *src1;
	unsigned char *src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*src1++ != *src2++)
			return (src1[-1] < src2[-1] ? -1 : 1);
	}
	return (0);
}
