/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 02:56:06 by hcastanh          #+#    #+#             */
/*   Updated: 2020/04/26 12:44:04 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
** {
**     const size_t srclen = ft_strlen(src);
**     const size_t dstlen = ft_strnlen(dst, dstsize);
**     if (dstlen == dstsize) return dstsize+srclen;
**     if (srclen < dstsize-dstlen) {
**         ft_memcpy(dst+dstlen, src, srclen+1);
**     } else {
**         ft_memcpy(dst+dstlen, src, dstsize-1);
**         dst[dstlen+dstsize-1] = '\0';
**     }
**     return dstlen + srclen;
** }
*/

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
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


