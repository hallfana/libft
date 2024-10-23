#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dsize)
{
  size_t  i;
  size_t  swdst;

  if (dsize == 0)
    return (ft_strlen(src));
  i = 0;
  if ((int)dsize < 0)
  {
    while (src[i])
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = 0;
    return (ft_strlen(src));
  }
  swdst = dsize;
  dsize = ft_strlen(src);
  while (i < (swdst - 1))
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = 0;
  return (dsize);
}
