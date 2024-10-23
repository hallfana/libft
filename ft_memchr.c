#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t n)
{
  size_t  i;
  unsigned char *s_p;
  unsigned char c_p;

  i = 0;
  s_p = (unsigned char*)s;
  c_p = (unsigned char)c;
  while (i < n)
  {
    if (s_p[i] == c_p)
      return (&s_p[i]);
    i++;
  }
  return (NULL);
}
