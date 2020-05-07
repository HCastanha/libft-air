/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:38:49 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/07 00:56:58 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		n_cpy;

	i = 0;
	n_cpy = n;
	while (n_cpy)
	{
		n_cpy = n_cpy / 10;
		i++;
	}
	n_cpy = n;
	if (n <= 0)
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);

	s[i] = '\0';
	while (i--)
	{
		s[i] = (n_cpy % 10);
		s[i] *= ((n_cpy < 0) ? -1 : 1);
		s[i] += '0';
		n_cpy /= 10;
	}
	if (n < 0)
		s[0] = '-';
	if (n == 0)
		s[0] = '0';
	return (s);
}