#include "libft.h"

void  *ft_memmove(void *dest, const void *src, size_t n)
{
  unsigned char *d;
  unsigned char *s;
  size_t        i;

  if (dest == 0 && src == 0)
    return (NULL);
  d = (unsigned char*)dest;
  s = (unsigned char*)src;
  i = 0;
  if (dest > src)
  {
    while (--n != 0)
    //{
      //n--;
      d[n] = s[n];
    //}
  }
  else
  {
    while (i < n)
    {
      d[i] = s[i];
      i++;
    }
  }
  return (dest);
}
