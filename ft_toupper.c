#include "libft.h"

int     ft_toupper(int c)
{
    if (ft_islower(c) == 1)
        c -= 040;
    return (c);
}