#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t  i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
    i++;
  if (i < n)
    return (s1[i] - s2[i]);
  else
    return (0);
}