#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char    *src_c;
    char    *dst_c;
	
	src_c = (char *)src;
	dst_c = (char *)dst;
	
	while (n-- > 0)
		*dst_c++ = *src_c++;
	dst_c = (char *)dst;
	return (dst_c);
}