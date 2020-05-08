/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 02:56:06 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/08 10:21:39 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dst, dstsize);
	if (!dstsize)
		return (srclen);
	if (dstlen != dstsize)
	{
		while (i < (dstsize - dstlen - 1) && src[i])
		{
			*(dst + dstlen + i) = src[i];
			i++;
		}
		*(dst + dstlen + i) = 0;
	}
	return (dstlen + srclen);
}
