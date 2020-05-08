/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 12:31:09 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/07 21:56:20 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	if (str == '\0')
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			neg = (-1);
	}
	while (*str == 0)
		str++;
	while (ft_isdigit(*str) != '\0')
	{
		if ((i * 10 + *str - '0') < (int)-0x80000000)
			return (-1);
		if ((i * 10 + *str - '0') > (int)0x7FFFFFFF)
			return (0);
		i = i * 10 + *str++ - '0';
	}
	return ((int)(neg * i));
}
