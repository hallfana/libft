#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
  char  *last_occ;

  if (c == 0)
    return ((char *)s + ft_strlen(s));
  last_occ = NULL;
  while (*s)
  {
    if (*s == (char)c)
      last_occ = (char *)s;
    s++;
  }
  return (last_occ);
}
