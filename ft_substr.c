#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  i;
  size_t  j;
  char    *str;

  if (ft_strlen(s) > len)
    str = (char*)malloc(sizeof(*s) * (len));
  else
    str = (char*)malloc(sizeof(*s) * (ft_strlen(s)));  
  if (!str)
    return (NULL);
  i = 0;
  j = 0;
  while (s[i])
  {
    if (i >= start && j < len)
    {
      str[j] = s[i];
      j++;
    }
    i++;
  }
  return (str);
}
