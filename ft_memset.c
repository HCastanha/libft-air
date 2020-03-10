void *ft_memset(void *str, int c, size_t n)
{
  unsigned char *ptr;
  
  ptr = (unsigned char*)str;
  while (n-- > 0)
    *ptr++ = c;
  return (str);
}
