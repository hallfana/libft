#include "libft.h"

char  *ft_strnstr(const char *big, const char *little, size_t len)
{
  int  i;
  int  l;

  i = 0;
  if ((!big || !little) && len == 0)
		return (NULL);
  if (ft_strlen(little) == '\0')
    return ((char *)big);
  if ((int)len < 0)
    return (ft_strnstr(big, little, ft_strlen(big)));
  if (len == 1 && big[0] == little[0])
    return ((char *)big);
  while ((char)big[i] && i < (int)len - 1)
  {
    l = 0;
    while ((char)big[i + l] == (char)little[l])
    {

      if (l == (int)ft_strlen((char *)little) - 1 && i + l < (int)len)
        return ((char *)(big + i));
      l++;
    }
    i++;
  }
  return (NULL);
}
