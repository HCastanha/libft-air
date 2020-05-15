/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcastanh <hcastanh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 17:59:22 by hcastanh          #+#    #+#             */
/*   Updated: 2020/05/15 04:31:28 by hcastanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** int	main()
** {
** 	char *in = "pedro-de-carv";
** 	char **out = ft_split(in, '-');
** 	int i = 0;
** 	while (*((*out)+i))
** 	{
** 		ft_putendl(*((*out)+i));
** 		i++;
** 	}
** }
*/
#include "libft.h"

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;
	int		words;

	i = 0;
	words = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	if (!(split = (char **)malloc((words + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	k = 0;
	while (k < words)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (!(split[k] = (char *)malloc((i - j + 1) * sizeof(char))))
			return (NULL);
		i = j;
		while (s[i] && s[i] != c)
		{
			split[k][i - j] = s[i];
			i++;
		}
		split[k][i - j] = '\0';
		while (s[i] == c)
			i++;
		k++;
	}
	split[k] = NULL;
	return (split);
}
