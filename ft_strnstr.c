#include "libft.h"

char  *strnstr(const char *big, const char *little, size_t len)
{
  size_t  i;
  size_t  l;

  i = 0;
  l = 0;
  if (ft_strlen(little) == 0)
    return (big);
  while (big[i] && i < len)
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
    if (l == (ft_strlen(l) - 1))
      return (big[i - l]);
    i++;
  }
  return (NULL);
}
