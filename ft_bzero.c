#include "libft.h"

void  ft_bzero(void *s, size_t n)
{
  size_t           i;
  unsigned char *src;

  i = 0;
  src = (unsigned char*)s;
  while (i < n)
  {
    src[i] = 0;
    i++;
  }
}
