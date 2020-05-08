/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 20:53:55 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/08 09:42:56 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	if (!(dup = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	len = 0;
	while (*s1)
		*(dup + len++) = *s1++;
	return (dup);
	free(dup);
}
