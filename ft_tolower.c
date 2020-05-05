#include "libft.h"

int     ft_tolower(int c)
{
    if (ft_isupper(c) == 1)
        c += 0b00100000;
    return (c);
}