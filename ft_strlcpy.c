#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dsize)
{
  size_t  i;

  i = 0;
  if (dsize > 0)
  {
    while (i < dsize - 1 && src[i])
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = '\0';
  }
  return (ft_strlen(src));
}
