#include "libft.h"

char  *ft_strjoin(char const *s1, char const *s2)
{
  size_t  i;
  char    *str;

  i = 0;
  str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
  if (!str)
    return (NULL);
  while (i < ft_strlen(s1))
  {
    str[i] = s1[i];
    i++;
  }
  while (i < (ft_strlen(s1) + ft_strlen(s2)))
  {
    str[i] = s2[i - ft_strlen(s1)];
    i++;
  }
  str[i] = 0;
  return (str);
}
