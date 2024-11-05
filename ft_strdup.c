#include "libft.h"

char  *ft_strdup(const char *s)
{
  size_t  i;
  size_t  len;
  char    *c;

  i = 0;
  len = ft_strlen(s);
  c = (char *)malloc(sizeof(char) * (len + 1));
  if (!c)
    return (NULL);
  while (i < len)
  {
    c[i] = s[i];
    i++;
  }
  c[i] = '\0';
  return c;
}

char  *ft_strndup(const char *s, size_t sw)
{
  size_t  i;
  size_t  len;
  char    *c;

  i = 0;
  len = ft_strlen(s);
  c = (char *)malloc(sizeof(char) * (sw));
  if (!c)
    return (NULL);
  while (i < len && i < sw)
  {
    c[i] = s[i];
    i++;
  }
  c[i] = '\0';
  return c;
}