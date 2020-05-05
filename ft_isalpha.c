#include "libft.h"

int		ft_isalpha(int c)
{
	return (ft_islower(c) == 1 || ft_isupper(c) == 1);
}