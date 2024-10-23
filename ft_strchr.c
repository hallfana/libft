#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  if (c == 0)
    return ((char *)s + ft_strlen(s));
  while (*s)
  {
    if (*s == (char)c)
      return ((char *)s);
    s++;
  }
  return (NULL);
}
