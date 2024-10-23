#include "libft.h"

char  *ft_strnstr(const char *big, const char *little, size_t len)
{
  int  i;
  int  l;

  i = 0;
  if (ft_strlen(little) == '\0')
    return ((char *)big);
  if ((int)len < 0)
    return (ft_strnstr(big, little, ft_strlen(big)));
  if (len == 1 && big[0] == little[0])
    return ((char *)big);
  while (big[i] && i < (int)len - 1)
  {
    l = 0;
    while ((char)big[i + l] == (char)little[l])
    {
      if (l == ft_strlen((char *)little) - 1)
        return ((char *)(big + i));
      l++;
    }
    i++;
  }
  return (NULL);
}
