#include "libft.h"

char  *ft_strdup(const char *s)
{
  size_t  i;
  size_t  len;
  char    *c;

  i = 0;
  len = ft_strlen(s);
  c = (char *)malloc(sizeof(char) * (len + 1));
  while (i < len)
  {
    c[i] = s[i];
    i++;
  }
  c[i] = '\0';
  return c;
}
