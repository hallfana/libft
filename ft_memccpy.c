#include "libft.h"

void  *ft_memccpy(void  *dest, const void *src, int c, size_t n)
{
  unsigned char *d;
  unsigned char *s;
  size_t        i;

  i = 0;
  d = (unsigned char *)dest;
  s = (unsigned char *)src;
  while(i < n)
  {
    d[i] = s[i];
    if (s[i] == (unsigned char)c)
      return ((void *)++d);
    i++;
  }
  return (NULL);
}
