#include "libft.h"

char  *ft_strnstr(const char *big, const char *little, size_t len)
{
  size_t  i;
  size_t  l;

  i = 0;
  l = 0;
  if (ft_strlen(little) == 0)
    return ((char *)big);
  while (big[i] && i <= len)
  {
    if (big[i] == *little)
    {
      l++;
      little++;
    }
    else {
      little -= l;
      l = 0;
    }
    if (l == (ft_strlen(little) - 1))
      return ((char *)&big[i - l]);
    i++;
  }
  return (NULL);
}
