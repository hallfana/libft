#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  i;
  size_t  j;
  char    *str;

  i = 0;
  j = 0;
  if (len < (ft_strlen(s) - start))
    str = (char*)malloc(sizeof(char)*(len+1));
  else
    str = (char*)malloc(sizeof(char)*(ft_strlen(s)-start+1));
  if (!str)
    return (NULL);
  while(s[i])
  {
    if (i >= start && j < len)
    {
      str[j] = s[i];
      j++;
    }
    i++;
  }
  str[j] = 0;
  return (str);
}
