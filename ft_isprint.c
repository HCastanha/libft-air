#include "libft.h"

int     ft_isprint(int c)
{
    return (c >= 0040 && c <= 0176);
}