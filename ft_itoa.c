/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:38:49 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/02 15:32:09 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *s;
	int i = 0;
	int n_cpy;

	if (n == -2147483648)
	{
		n_cpy = -147483648;
		i++;
	}
	n_cpy = n;
	while (n_cpy)
	{
		n_cpy /= 10;
		i++;
	}
	if (n < 0 && n != -2147483648)
	{
		n_cpy = -n;
		i++;
	}
	else
		n_cpy = n;
s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);

	s[i] = '\0';
	while (i--)
	{
		s[i] = (n_cpy % 10) + '0';
		n_cpy /= 10;
	}
	if (n == -2147483648)
		s[1] = '2';
	if (n < 0)
		s[0] = '-';
	if (n == 0)
		s[0] = '0';
	return (s);
}