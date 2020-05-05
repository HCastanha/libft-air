#ifndef __LIBFT_H__
# define __LIBFT_H__

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

#ifndef size_t
# define size_t unsigned long
#endif

int     ft_atoi(const char *str);
void    ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);


void    ft_putchar(char c);
void    ft_putstr(const char *s);
int		ft_isalpha(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_isspace(int c);

void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);

#endif