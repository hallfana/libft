#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned char *s1_p;
  unsigned char *s2_p;
  size_t        i;

  if (n <= 0)
    return (0);
  i = 0;
  s1_p = (unsigned char*)s1;
  s2_p = (unsigned char*)s2;
  while(i < n)
  {
    if (s1_p[i] != s2_p[i])
      return (s1_p[i] - s2_p[i]);
    i++;
  }
  return (0);
}
