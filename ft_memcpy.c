#include "libft.h"

void  *ft_memcpy(void  *dest, const void *src, size_t n)
{
  size_t           i;
  unsigned char *d;
  unsigned char *s;

  if (dest == 0 && src == 0)
    return (NULL);
  i = 0;
  d = (unsigned char*)dest;
  s = (unsigned char*)src;
  while (i < n)
  {
    d[i] = s[i];
    i++;
  }
  return (dest);
}
